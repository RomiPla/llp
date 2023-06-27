#include "main.h"
/**
 *_strncpy - copies from one string to another
 *@dest: Destiny of the copy
 *@src: Source of the copy
 *@n: Limit of the copy
 *Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
