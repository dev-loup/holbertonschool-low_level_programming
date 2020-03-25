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
	unsigned int counter = 0;
	listint_t *iter = *head;
	listint_t *cpy;

	cpy = malloc(sizeof(listint_t));
	if (cpy == NULL)
	{
		free(cpy);
		return (NULL);
	}
	while (iter != NULL)
	{
		if (counter == idx - 1)
		{
			cpy->n = n;
			cpy->next = iter->next;
			iter->next = cpy;
			return (cpy);
		}
		counter++;
		iter = iter->next;
	}
	return (NULL);
}
