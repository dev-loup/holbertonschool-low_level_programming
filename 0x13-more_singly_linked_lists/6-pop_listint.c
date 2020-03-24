#include "lists.h"
/**
 * pop_listint - removes the head node of a linked list
 * Removes the head node of a linked list and returns the int value
 * @head: pointer to head pointer
 * Return: return the int value in head node
 */
int pop_listint(listint_t **head)
{
	int cpy;
	listint_t *eraser;

	if (*head != NULL)
	{
		cpy = (*head)->n;
		eraser = *head;
		*head = (*head)->next;
		free(eraser);
		return (cpy);
	}
	else
		return (0);
}
