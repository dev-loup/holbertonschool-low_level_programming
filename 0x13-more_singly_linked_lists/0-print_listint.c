#include "lists.h"

/**
 * print_listint - prints integer structed list
 * @h: struct containing the integer
 * prints all elements of a listint_t list
 * Return: number of elements found
 */
size_t print_listint(const listint_t *h)
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
