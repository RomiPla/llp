#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask; /**Declare the mask variable at the beginning*/

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /**Check if the index is out of bounds*/

	mask = 1; /**Initialize the mask with the bit at the index set to 1*/
	mask <<= index; /**Shift the mask to the left by the index to get the correct bit position*/
	mask = ~mask; /**Invert the mask to have the bit at the index set to 0*/
	*n &= mask; /**Perform bitwise AND with the number to clear the bit at the index*/
	return (1);
}
