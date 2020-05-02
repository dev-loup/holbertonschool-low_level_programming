#include "lists.h"

/**
 * sum_dlistint - sums integer structed list
 * @head: struct containing the integer
 * sums all elements of a dlistint_t list
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
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
