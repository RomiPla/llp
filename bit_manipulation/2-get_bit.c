#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	mask <<= index;

	return (n & mask) ? 1 : 0;
}
