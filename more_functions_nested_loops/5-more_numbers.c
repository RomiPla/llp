#include "main.h"

/**
 *more_numbers - Prints all numbers from 0 to 14 ten times
 *
 *Return: On Success (0)
 */
void more_numbers(void)
{
	char aepa;
	char aipa;

			while (aipa <= 9)
			{
				while (aepa <= 14)
				{
					if (aepa > 9)
						_putchar(aepa / 10 + '0');
					_putchar(aepa % 10 + '0');
					aepa++;
				}
			_putchar('\n');
			aipa++;
			aepa = 0;
			}
}
