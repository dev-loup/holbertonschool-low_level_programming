#include "lists.h"

/**
 * sum_listint - sums integer structed list
 * @head: struct containing the integer
 * sums all elements of a listint_t list
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head->n)
			sum += head->n;
		head = head->next;
	}
	return (sum);
}
