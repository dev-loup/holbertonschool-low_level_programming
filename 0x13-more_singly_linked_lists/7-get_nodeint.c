#include "lists.h"

/**
 * get_nodeint_at_index - returns a node value at index position
 * @head: struct containing the elements
 * @index: desired node index
 * Return: pointer to indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *cpy = head;

	while (cpy != NULL)
	{
		if (counter == index)
			return (cpy);
		counter++;
		cpy = cpy->next;
	}
	return (NULL);
}
