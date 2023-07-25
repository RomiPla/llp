#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *mi;
	int ro;

	list_t *new_node;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	mi = strdup(str);
	if (mi == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (ro = 0; str[ro];)
		ro++;

	new_node->str = mi;
	new_node->len = ro;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (*head);
}
