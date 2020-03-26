#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: struct containing the integer
 * @idx: desired index
 * @n: number to insert
 * Return: address to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *iter = *head;
	listint_t *node;
	unsigned int counter;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (free(node), NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL && idx > 0)
		return (free(node), NULL);
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (counter = 0; counter < idx - 1; counter++)
	{
		iter = iter->next;
		if (iter == NULL && idx > counter)
			return (free(node), NULL);
	}
	node->next = iter->next;
	iter->next = node;
	return (node);
}
