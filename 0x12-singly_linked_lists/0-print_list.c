#include "lists.h"

/**
 * print_list - print a full list.
 * @h: struct list to print
 * Return: number of nodes
 */
int print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
