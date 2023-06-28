#include "main.h"
/**
 *reverse_array - Reverses an array
 *
 *@n: Is the number of elements in the array
 *
 *@a: The array to be reversed
 *
 *Return: Void
 */
void reverse_array(int *a, int n)
{
	int e;
	int w;

	/*for (e = n - 1; e >= n; e--)*/
	for (e = 0; e < (n / 2); e++)
	{
		w = a[e];
		a[e] = a[n - e - 1];
		a[n - e - 1] = w;
	}

}
