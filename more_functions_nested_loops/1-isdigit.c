#include "main.h"

/**
 *_isdigit - Detects which character is a number
 *@c: is a variable
 *Return: On Success (0)
 */
int _isdigit(int c)
{
		int aipa = c;

		if (aipa > 47 && aipa < 58)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
