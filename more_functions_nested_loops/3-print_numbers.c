#include "main.h"

/**
 *print_numbers - Prints the Numbers form 0 to 9
 *
 *Return: On Success (0)
 */
void print_numbers(void)
{
	char aapa;

	for (aapa = '0'; aapa <= '9' ; aapa++)
	{
		_putchar(aapa);
	}
	_putchar('\n');
}
