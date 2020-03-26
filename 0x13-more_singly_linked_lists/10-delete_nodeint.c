#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node indexed.
 * @head: pointer to list head
 * @index: point of deletion
 * Return: 1 on success, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *iter = *head;
	listint_t *delnode;

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
				delnode = delnode->next;
				iter->next = delnode->next;
				free(delnode);
				return (1);
			}
			iter = iter->next;
		}
	return (-1);
}
