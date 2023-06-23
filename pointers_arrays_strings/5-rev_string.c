#include "main.h"

/**
 * rev_string - Prints a string, in reverse, followed by a new line
 * @s: is a string
 */
void rev_string(char *s)
{
	int i = 0;
	int x;
	int j;
	char o;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (x = 0; x < i / 2; x++)
	{
		o = s[x];
		s[x] = s[j];
		s[j] = o;
		j--;
	}
}
