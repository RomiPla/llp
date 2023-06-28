#include "main.h"
/**
 *leet - Encodes a string using 1337
 *
 *@s: String to be encoded
 *
 *Return: Always 0 (Success)
 */
char *leet(char *s)
{
	int w = 0;
	int n;
	char num[] = "4433007711";
	char let[] = "aAeEoOtTlL";

	while (*(s + w) != '\0')
	{
		n = 0;
		while (let[n] != '\0')
		{
			if (*(s + w) == let[n])
			{
				*(s + w) = num[n];
			}
			n++;
		}
		w++;
	}
	return (s);
}
