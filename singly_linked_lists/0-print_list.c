#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *print_list - print all elements of a list_t
 *@h: head
 *Return: node
 */
size_t print_list(const list_t *h)
{

	const list_t *ro;
	size_t  mi;

	mi = 0;
	ro = h;
	while (ro != NULL)
	{
		if (ro->str)
			printf("[%d] %s\n", ro->len, ro->str);
		else
			printf("[0] (nil)\n");
		ro = ro->next;
		mi++;
	}
	return (mi);
}
