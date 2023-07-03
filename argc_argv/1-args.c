#include <stdio.h>
/**
 * main - Prints the number passed into it
 *@argc: Is the amount of existant argv
 *@argv: Is a pointer to a string the amount of arguments of the command line
 *Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	(void) *argv;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
			;

		printf("%d\n", count - 1);
	}
	else if (argc == 1)
		printf("0\n");

	return (0);
}
