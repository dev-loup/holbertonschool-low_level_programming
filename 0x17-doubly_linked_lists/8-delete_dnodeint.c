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
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);
	for (counter = 0; node != NULL; counter++)
	{
		if (counter == index)
		{
			if (index != 0)
			{
				if (node->next)
				{
					node->prev->next = node->next;
					node->next->prev = node->prev;
				}
				else
					node->prev->next = NULL;
			}
			else if (node->next)
			{
				node->next->prev = *head;
				*head = node->next;
			}
			else
				*head = NULL;
			free(node);
			return (1);
		}
		node = node->next;
	}
	return (-1);
}
