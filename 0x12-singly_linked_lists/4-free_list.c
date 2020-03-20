#include "lists.h"

/**
 * free_list - forward memory cleaning
 * @head: linked list
 * Return: None.
 */
void free_list(list_t *head)
{
	list_t *end = head;

	while (head)
	{
		end = head;
		head = head->next;
		free(end->str);
		free(end);
	}
}
