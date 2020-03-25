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
	listint_t *new = *head;
	listint_t *cpy;

	cpy = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (new != NULL)
	{
		if (counter == idx)
		{
			cpy->n = n;
			cpy->next = new->next;
			new->next = cpy;
			return (new);
		}
		counter++;
		new = new->next;
	}
	return (NULL);
}
