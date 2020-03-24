#include "lists.h"

/**
 * listint_len - returns number of listed elements
 * @h: struct containing the elements
 * Return: number of elements found
 */
int listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		if (h->n)
		counter++;
		h = h->next;
	}
	return (counter);
}
