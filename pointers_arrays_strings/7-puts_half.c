#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int r = 0;
	int o;

	while (str[r] != '\0')
	{
		r++;
	}

	if (r % 2 == 1)
	{
		o = (r - 1) / 2;
		o += 1;
	}
	else
	{
		o = r / 2;
	}

	for (; o < r; o++)
	{
		_putchar(str[o]);
	}

	_putchar('\n');
}
