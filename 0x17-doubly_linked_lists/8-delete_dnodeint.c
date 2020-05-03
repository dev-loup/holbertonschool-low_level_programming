#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node indexed.
 * @head: pointer to list head
 * @index: point of deletion
 * Return: 1 on success, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *iter = *head;
	dlistint_t *delnode;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(iter);
		return (1);
	}
	else
		for (counter = 0; iter != NULL; counter++)
		{
			if (counter == index - 1)
			{
				delnode = iter;
				iter->prev->next = iter->next;
				iter->next->prev = iter->prev;
				free(delnode);
				return (1);
			}
			iter = iter->next;
		}
	return (-1);
}
