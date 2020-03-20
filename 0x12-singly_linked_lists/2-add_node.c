#include "lists.h"

/**
 * add_node - ad a new node and returns a pointer.
 * @head: address
 * @str: string to print
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
