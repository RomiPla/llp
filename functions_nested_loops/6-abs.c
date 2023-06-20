#include "main.h"
#include <stdio.h>

/**
 *_abs- absolute value
 *@n: it is a number
 * Return: Always 0.
 */
int _abs(int n)
{
	int numbers = n;

	if (numbers >= 0)
	{
	return (numbers);
	}
	else if (numbers < 0)
	{
	return (numbers * -1);
	}
	return (0);
}
