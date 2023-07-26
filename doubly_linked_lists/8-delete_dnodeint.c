#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at a given index.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1); /**List is empty*/

	if (index == 0)
	{
		/**Delete the first node*/
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index)
		{
			/**Delete the node at the desired index*/
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1); /**Index out of range, deletion failed*/
}
