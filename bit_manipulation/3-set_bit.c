#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask; /**Declare the mask variable at the beginning*/

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /**Check if the index is out of bounds*/

	mask = 1; /**Initialize the mask with the bit at the index set to 1*/
	mask <<= index; /**Shift the mask to the left by the index to get the correct bit position*/
	*n |= mask; /**Perform bitwise OR with the number to set the bit at the index to 1*/
	return (1);
}
