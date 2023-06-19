#include <stdio.h>
/**
 * main - Numbers
 * Return: is 0
 */

int main(void)
{
	char numbers;

	char alphabet;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
