#include "main.h"

/**
  *print_last_digit - last number
  *@n: letter in question
  *Return Always seccess
  */

int print_last_digit(int n)
{
	int ld = n % 10;
	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
