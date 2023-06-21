#include "main.h"

/**
 * print_line - Prints _ 'n' number of times
 * @n: Is a variable number
 * Return: Always 0.
 */

void print_line(int n)
{
	int aopa;

	for (aopa = 1 ; aopa <= n ; aopa++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
