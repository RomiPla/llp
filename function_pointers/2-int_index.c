#include "function_pointers.h"
/**
 *int_index - Checks if an element of the array is an int
 *@array: Is the array to compare
 *@size: Size of the array
 *@cmp: Is a function made to compare ints
 *
 *Return: Is 0 when cmp doesn't find int_index and 1 when it does;-1 when error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (; count < size; count++)
	{
		if (cmp(array[count]) != 0)
		{
			return (count);
		}
	}
	return (-1);
}
