#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, len);

		close(fd);

		if (bytes_written == -1)
			return (-1);
	}
	else
	{
		close(fd);
	}

	return (1);
}
