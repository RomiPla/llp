#include "main.h"

/**
  * print_diagonal - Prints a diagonal line according to n
  * @n: The number of times to print diagonal lines
  *
  * Return: empty
  */
void print_diagonal(int n)
{
	int aopa, aupa;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (aopa = 0; aopa < n; aopa++)
		{
			for (aupa = 0; aupa < aopa; aupa++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
