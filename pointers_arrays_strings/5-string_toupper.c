#include "main.h"
/**
  *string_toupper - is to change all lowercase letters in touppercase
  *
  *@E: is the string to be changed
  *
  *Return: 0 Always (Success)
  */

char *string_toupper(char *E)
{
	int R;

	for (R = 0; E[R] != '\0'; R++)
	{
		if (E[R] >= 97 && E[R] <= 122)
		{
			E[R] -= 32;
		}
	}
	return (E);
}
