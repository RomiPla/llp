#include "main.h"

/**
* main - check the code.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{

	char alphabet;
	char numbers;
	
	for (numbers= 1 ; numbers <= 10 ; numbers++)
	{ 
	    for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	_putchar(alphabet);
	}
	
	_putchar('\n');
}
