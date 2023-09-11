#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
  * linear_search - Nombre de la funcion
  * @array: fruriuhuh
  * @size: uifhufdhsdhfd
  * @value: -1 o 1
  *
  **/
int linear_search(int *array, size_t size, int value)
{
	size_t R = 0;

	if (array == NULL)
	{
		return (-1);
	}


	for (; R < size; R++)
	{
		printf("Value checked array[%lu] = [%d]\n", R, array[R]);
		if (array[R] == value)
		{
			return (R);
		}
	}
	return (-1);
}
