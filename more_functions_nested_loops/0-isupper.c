#include "main.h"

/**
 *_isupper - Detects which letter is lowercase
 *@c: is a variable
 *Return: On Success (0)
 */
int _isupper(int c)
{
		int aipa = c;

		if (aipa > 64 && aipa < 91)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
