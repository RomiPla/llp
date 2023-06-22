#include "main.h"

/**
 * swap_int - Exchanges the values
 *@a: is a number
 *@b: is anoter number
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
