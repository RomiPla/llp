#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: it is a number
 * Return: Always 0.
 */
int print_sign(int n)
{
	int numbers = n;

	if (numbers > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (numbers == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
