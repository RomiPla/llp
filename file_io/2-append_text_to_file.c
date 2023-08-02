#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content) 
{
	FILE *file = fopen(filename, "a");
	int bytes_written = fprintf(file, "%s", text_content);

	if (filename == NULL)
	{
		return -1;
	}

	if (text_content == NULL || strlen(text_content) == 0)
	{
		return -1;
	}

	if (file == NULL)
	{
		return -1;
	}

	fclose(file);

	if (bytes_written < 0)
	{
		return -1;
	}

	return 1;
}
