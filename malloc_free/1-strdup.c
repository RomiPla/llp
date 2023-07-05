#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char
*_strdup(char *str)

{
	int r = 0, o = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[o])
	{
		o++;
	}

	s = malloc((sizeof(char) * o) + 1);

	if (s == NULL)
		return (NULL);

	while (r < o)
	{
		s[r] = str[r];
		r++;
	}

	s[r] = '\0';
	return (s);
}
