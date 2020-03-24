#include "lists.h"

/**
 * add_nodeint_end - add the last node with pointer null in next.
 * @head: address
 * @n: int to add
 * Return: new node pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;
	int cpy;

	new = malloc(sizeof(listint_t));
	end = *head;
	cpy = n;

	if (new == NULL || cpy == 00)
	{
		free(new);
		return (NULL);
	}
	new->n = cpy;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	return (new);
}
