#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	/**Traverse the list until the desired index or until the end of the list*/
	while (current != NULL)
	{
		if (count == index)
		{
		return (current); /**Return the node at the desired index*/
		}
		current = current->next;
		count++;
	}

	/**If the index is out of range, return NULL*/
	return (NULL);
}
