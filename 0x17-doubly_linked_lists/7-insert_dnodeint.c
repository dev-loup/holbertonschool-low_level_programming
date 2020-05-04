#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @head: struct containing the integer
 * @idx: desired index
 * @n: number to insert
 * Return: address to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iter = *h;
	dlistint_t *node;
	unsigned int counter;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (free(node), NULL);
	node->n = n;
	if (*h == NULL && idx > 0)
		return (free(node), NULL);
	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	for (counter = 0; counter != idx; counter++)
	{
		if (iter->next)
			iter = iter->next;
		else
			return(free(node), NULL);
	}
	node->prev = iter->prev;
	node->next = iter;
	iter->prev->next = node;
	iter->prev = node;
	return (node);
}
