#include "main.h"
#include <stdio.h>

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int eipa;

	for (eipa = 1; eipa <= 100; eipa++)
	{
		if ((eipa % 3 == 0) && (eipa % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (eipa % 3 == 0)
		{
			printf("Fizz");
		}
		else if (eipa % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", eipa);
		}

		if (eipa != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
