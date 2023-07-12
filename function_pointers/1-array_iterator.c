#include "function_pointers.h"

void
array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int count = 0;

	if (array != NULL && action != NULL)
	{
		for (; count < size; count++)
		{
			action(array[count]);
		}
	}
}
