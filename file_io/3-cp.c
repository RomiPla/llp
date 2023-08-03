#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void print_error_and_exit(int code, const char* message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

void copy_file(const char* file_from, const char* file_to)
{
	int fd_from, fd_to;
	ssize_t num_read, num_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		print_error_and_exit(99, "Error: Can't write to file");

	while ((num_read = read(fd_from, buffer, sizeof(buffer))) > 0) 
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written != num_read)
			print_error_and_exit(99, "Error: Can't write to file");
	}

	if (num_read == -1)
		print_error_and_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd");
}

int main(int argc, char* argv[])
{
	const char* file_from = argv[1];
	const char* file_to = argv[2];
	
	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to");


	copy_file(file_from, file_to);

	return 0;
}
