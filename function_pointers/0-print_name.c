#include "function_pointers.h"
/**
 *print_name - Prints a name
 *@name: Name to be printed
 *@f: Is a pointer to a function
 *@*: Is a char pointer
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
