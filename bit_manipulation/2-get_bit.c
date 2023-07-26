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
	unsigned long int mask = 1; /**Use a mask with the bit at the index set to 1*/

	/**Check if the index is out of bounds*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/**Shift the mask to the left by the index to get the correct bit position*/
	mask <<= index;

	/**Perform bitwise AND with the number to retrieve the value of the bit at the index*/
	return (n & mask) ? 1 : 0;
}
