#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int size)
{
	int eopa, eupa, iapa;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (eopa = 0; eopa < size; eopa++)
		{
			for (eupa = size - eopa; eupa > 1; eupa--)
			{
				_putchar(32);
			}

			for (iapa = 0; iapa <= eopa; iapa++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}

