#include "lists.h"

/**
 * print_dlistint - prints integer structed list
 * @h: struct containing the integer
 * prints all elements of a dlistint_t list
 * Return: number of elements found
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		if (h->n)
			printf("%i\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
