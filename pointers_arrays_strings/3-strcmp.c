#include "main.h"
/**
 *_strcmp - Compares two strings
 *@s1: String 1
 *@s2: String 2
 *Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	if (s1 < s2)
	{
		return (15);
	}
	if (s1 > s2)
	{
		return (-15);
	}
return (0);
}
