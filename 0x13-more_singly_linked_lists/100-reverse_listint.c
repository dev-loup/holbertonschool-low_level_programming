#include "lists.h"

/**
 * reverse_listint - Reverse a list
 * @head: pointer to head of the list
 * Return: Inverse linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cpy = *head;
	listint_t *inversed;

	if (*head == NULL)
		return (NULL);
	while (cpy->next != NULL)
	{
		inversed = cpy->next;
		cpy->next = inversed->next;
		inversed->next = *head;
		*head = inversed;
	}
	return (*head);
}
