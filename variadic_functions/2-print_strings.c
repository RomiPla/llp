#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void
print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *h;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		h = va_arg(list, char*);
		if (h == NULL)
			printf("(nil)");
		else
			printf("%s", h);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
