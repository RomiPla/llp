#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ro = n ^ m;
	unsigned int count = 0;

	while (ro != 0)
	{
		count += ro & 1; /**Check the least significant bit*/
	ro >>= 1; /**Shift right to check the next bit*/
	}

	return count;
}
