#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
*malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);

	return (r);
}
