#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: string
 *Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ro;
	unsigned int mi;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (mi = 1, ro = 0, len--; len >= 0; len--, mi *= 2)
	{
		if (b[len] == '1')
			ro += mi;
	}
	return (ro);
}
