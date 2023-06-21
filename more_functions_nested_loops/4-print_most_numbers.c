#include "main.h"
/**
 * print_most_numbers - Prints all numbers from 0 to 9 ecept 2 and 4
 *
 * Return: Always 0 (Success)
 *
 */
void print_most_numbers(void)
{
	char ipa;

	for (ipa = '0' ; ipa <= '9' ; ipa++)
	{
		if (ipa != '2' && ipa != '4')
		_putchar(ipa);
	}
	_putchar('\n');
}
