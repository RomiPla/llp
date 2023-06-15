 #include<stdio.h>
/**
 *main - entry
 *Return: the return is 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
		printf("Size of a char: %d byte(s)\n", sizeof(charType));
		printf("Size of an int: %zu byte(s)\n", sizeof(intType));
		printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
		printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
		printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
