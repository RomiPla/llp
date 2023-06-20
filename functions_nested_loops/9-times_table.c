#include "main.h"

/**
  * times_table - Prints the 9 times talbe, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int n, m, o, p, q;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)

			o = n * m;

		if (o > 9)
		{
			p = o % 10;
			q = (o - p) / 10;

			_putchar(44);
			_putchar(32);
			_putchar(q + '0');
			_putchar(p + '0');
		}
		else
		{
			if (m != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}

			_putchar(o + '0');
		}
	}
	_putchar('\n');
}
