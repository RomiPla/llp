#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @U: Is the string to be reversed
 * Return: address of s
 */
char *cap_string(char *U)
{
	int W = 0, O;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(U + W))
	{
		if (*(U + W) >= 'a' && *(U + W) <= 'z')
		{
			if (W == 0)
				*(U + W) -= 'a' - 'A';
			else
			{
				for (O = 0; O <= 12; O++)
				{
					if (a[O] == *(U + W - 1))
						*(U + W) -= 'a' - 'A';
				}
			}
		}
		W++;
	}
	return (U);
}
