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
	int izq = 0;
	int der = size - 1;
	int med;
	size_t r = 0;

	if (array == NULL)
		return (-1);

	while
		(izq <= der);
	med = (izq + der) / 2;

	printf("searching in array: ");

	for (; r <= (size_t)der; r++)
	{
		printf("%d", array[r]);
		if (r < (size_t)der)
			printf(", ");
	}
	printf("\n");

	if (array[med] == value)
		return (med);
	else if (array[med] < value)
		izq = med + 1;
	else
		der = med - 1;
	return (-1);
}
