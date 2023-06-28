#include "main.h"
/**
   *_memcpy - A function that copies the memory of a pointer to another one
    *@src: Pointer
     *@dest: Character to be used to fill the memory pointed by s
      *@n: Number of bytes to be fill
       *
        *Return: Always 0 (Success)
	 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int lo;

			for (lo = 0; lo < n; lo++)
					{
								dest[lo] = src[lo];
									}
				return (dest);
}
