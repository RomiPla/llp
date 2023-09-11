#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
  * binary_search - busca el valor
  * @array: puntero al primer elemento de la matriz
  * @size: el numero de elementos de la matriz
  * @value: el valor que se va a buscar
  *
  * Return: Index where value is located, or -1 if not found
  **/
int binary_search(int *array, size_t size, int value)
{
	size_t r, med, fin;

	if (array == NULL)
		return (-1);
	for (med = 0, fin = size -1; fin >= med;)
	{
		printf("Searching in array: ");
		for (r = med; r < fin; r++)
			printf("%d, ", array[r]);

		printf("%d\n", array [r]);

		r = med + (fin - med) / 2;

		if (array[r] == value)
			return (r);
		else if (array[r] > value)
			fin =r - 1;

		else
			med = r + 1;
	}
	return (-1);
}
