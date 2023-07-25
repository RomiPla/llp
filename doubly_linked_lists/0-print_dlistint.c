#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes (elements) in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *mi = h;

	while (mi != NULL)
	{
		printf("%d\n", mi->n);
		count++;
		mi = mi->next;
	}

	return (count);
}
