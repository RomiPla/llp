#include "main.h"
/**
 *_strncat - Copies the content of a string to the end of another
 *@dest: A string
 *@src: The string that must be added to dest
 *@n: The limit of bytes to copy from src
 *Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	
	while(dest[i] != '\0')
	{
		i++;
	}
	for (j=0; j<n && src[j] != '\0';)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
