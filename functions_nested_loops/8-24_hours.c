#include "main.h"

/**
 * jack_bauer - prints every minute and hour
 * 
 * Return: Always 0.
 */
void jack_bauer(void)
{	
	int H; /*= hour*/
	int M; /*= minute*/

	for (H=0 ; H<=23 ; H++)
	{ 
		for (M=0 ; M<=59 ; M++)
		{ 
			_putchar(H/10 + '0');
			_putchar(H%10 + '0');
			_putchar(':');
			_putchar(M/10 + '0');
			_putchar(M%10 + '0');
			_putchar('\n');
		}
	}
}
