#include "main.h"

/**
 *_islower - lowercase character
 *@c: is a variable
 * Return: Always 0.
 */
int _islower(int c)
{
	int letters = c;

	if (letters < 123 && letters > 96)
	{
	return (1);
}
else
{
return (0);
}
_putchar('\n');
}
