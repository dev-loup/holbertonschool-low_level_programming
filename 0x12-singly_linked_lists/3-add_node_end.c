#include "lists.h"

/**
 * _strlen - prints the length of a string
 * @s: the string to measure
 *
 * Return: No returning
 */
int _strlen(const char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{}
	return (counter);

}

/**
 * add_node_end - add the last node with pointer null in next.
 * @head: address
 * @str: string to print
 * Return: new node pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;
	char *copy;

	new = malloc(sizeof(list_t));
	end = *head;
	copy = strdup(str);

	if (new == NULL || copy == NULL)
	{
		free(new);
		free(copy);
		return (NULL);
	}
	new->str = copy;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	return (new);
}
