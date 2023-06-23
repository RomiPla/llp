#include "main.h"

/**
 *_puts - Is used as a function that prints the string
 *
 * @str: is a string
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
