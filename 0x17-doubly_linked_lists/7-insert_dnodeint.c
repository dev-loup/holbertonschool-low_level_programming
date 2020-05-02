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
	for (counter = 0; counter < idx - 1; counter++)
	{
		iter = iter->next;
		if (iter == NULL && idx > counter)
			return (free(node), NULL);
	}
	node->next = iter->next;
	node->prev = iter;
	iter->next = node;
	return (node);
}
