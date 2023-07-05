#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @c: char
 * @size: size of array
 * Return: char pointer to malloc o NULL if error
 */

char *create_array(unsigned int size, char c)

{
	char *r;
	unsigned int o;

	if (size == 0 )
		return (NULL);

	r= malloc(size * sizeof(*r));
	if (r == NULL)
		return (NULL);

			for (o=0; o < size; o++)
				r[o]= c;
	return (r);
}
