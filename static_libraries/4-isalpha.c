#include "main.h"

/**
 *_isalpha - lowercase character
 *@c: is a variable
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int letters = c;

	if ((letters < 123 && letters > 96) || (letters < 91 && letters > 64))
	{
	return (1);
}
else
{
return (0);
}
_putchar('\n');
}
