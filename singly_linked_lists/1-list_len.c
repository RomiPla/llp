#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *print_list - print all elements of a list_t
 *@h: head
 *Return: node
 */
size_t list_len(const list_t *h)
{

	const list_t *ro;
	size_t  mi;

	mi = 0;
	ro = h;
	while (ro != NULL)
	{
		if (ro->str !=NULL)
		{
			ro = ro->next;
			mi++;
		}
		else
		{
		ro = ro->next;
		mi++;
		}
	}
	return (mi);
}
