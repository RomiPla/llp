#include "main.h"

/**
 * _strlen - calculates the length of a given string.
 * @s: Is points to the start of the string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int tj = 0;

	while (s[tj] != '\0')
	{
		tj++;
	}

	return (tj);
}
