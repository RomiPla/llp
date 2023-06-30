#include "main.h"
/**
 *_strchr - Is used to locate a certain character in a string
 *@s: Is the string
 *@c: Is the character to be located
 *
 *Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		return (s + index);
	}

	return ('\0');
}
