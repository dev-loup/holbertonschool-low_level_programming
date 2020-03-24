#include "lists.h"

/**
 * free_listint2 - forward memory cleaning
 * @head: linked list
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *end = *head;

	if (head != NULL)
	{
		while (*head)
		{
			end = *head;
			*head = (*head)->next;
			free(end);
		}
	}
}
