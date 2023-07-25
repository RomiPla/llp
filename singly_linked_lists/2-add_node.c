#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int ro;
	char *mi;

	list_t *new_node = NULL;

	if (str == NULL)
		return (NULL);

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
