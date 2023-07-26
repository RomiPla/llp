#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list.
 * @head: Pointer to the pointer of the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	/**Allocate memory for the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	/**Set data and next pointer for the new node*/
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/**The list is empty, make the new node the head*/
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/**Traverse to the last node*/
		current = *head;
		while (current->next != NULL)
			current = current->next;

		/**Update pointers to add the new node at the end*/
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
