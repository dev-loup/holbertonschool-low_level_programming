#include "lists.h"

/**
 * add_nodeint - adds a new node int and returns a pointer.
 * @head: address
 * @n: integer to print
 * Return: new node pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
