#include "main.h"
/**
 *_memset - A function that fills the memory of an area pointed by s
 *@s: Pointer
 *@b: Character to be used to fill the memory pointed by s
 *@n: Number of bytes to be fill
 *
 *Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lo;

	for (lo = 0; lo < n; lo++)
	{
		s[lo] = b;
	}
	return (s);
}
