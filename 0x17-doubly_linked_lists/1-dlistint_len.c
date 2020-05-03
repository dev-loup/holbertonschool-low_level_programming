#include "lists.h"

/**
 * dlistint_len - returns number of listed elements
 * @h: struct containing the elements
 * Return: number of elements found
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
