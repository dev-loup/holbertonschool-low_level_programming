#include "lists.h"

/**
 * free_listint - forward memory cleaning
 * @head: linked list
 * Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *end = head;

	while (head)
	{
		end = head;
		head = head->next;
		free(end);
	}
}
