#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node value at index position
 * @head: struct containing the elements
 * @index: desired node index
 * Return: pointer to indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *cpy = head;

	while (cpy != NULL)
	{
		if (counter == index)
			return (cpy);
		counter++;
		cpy = cpy->next;
	}
	return (NULL);
}
