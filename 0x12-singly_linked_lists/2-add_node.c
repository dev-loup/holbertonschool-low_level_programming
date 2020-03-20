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
 * add_node - ad a new node and returns a pointer.
 * @head: address
 * @str: string to print
 * Return: new node pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
