#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number passed into it
 *@argc: Is the amount of existant argv
 *@argv: Is a pointer to a string the amount of arguments of the command line
 *Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc == 3)
	{

		count = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", count);

	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
