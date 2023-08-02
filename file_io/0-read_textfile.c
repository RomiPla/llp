#include "main.h"
/**
 *read_textfile - Reads and prints a file to the POSIX standard output.
 *@filename: Is the file that will be read and printed.
 *@letters: is the number of letters that should be read and printed.
 *
 *Return: 0 if failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ro = 0, mi = 0;
	char buffer[10000];

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		ro = open(filename, O_RDONLY);
		if (ro == -1)
		{
			return (0);
		}
		else
		{
			mi = read(ro, buffer, letters);
			write(STDOUT_FILENO, buffer, mi);
			close(ro);
		}
	}
	return (mi);
}
