#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			result = (result << 1);
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0); /**Invalid character, return 0*/
	}

	return (result);
}
