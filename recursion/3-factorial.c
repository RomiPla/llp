#include "main.h"
/**
 *factorial - Returns the factorial of a given number
 *@n: The number to be factorialised
 *
 *Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else

		return (n * factorial(n - 1));

}
