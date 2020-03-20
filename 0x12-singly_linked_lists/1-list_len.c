#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements.
 * @h: struct list to print
 * Return: number of nodes
 */
int list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
