#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: always success
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int a = 0, b = 0;
	int x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
	a++;
	}

	for (x = 0; s2[x] != '\0'; x++)
	{
	b++;
	}

	string = malloc(sizeof(char) * b + a + 1);

	if (!string)
	{
	return (NULL);
	}
	for (x = 0; x != a; x++)
	{
	string[x] = s1[x];
	}

	for (x = 0; x != b; a++, x++)
	{
	string[a] = s2[x];
	}
	return (string);
}
