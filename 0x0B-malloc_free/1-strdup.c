#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - creates an array of chars
 * @str: the content of the array
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *arraycpy;
	unsigned int counter;
	unsigned int limiter;

	if (str == NULL)
		return (NULL);
	for (counter = 0; str[counter] != '\0'; counter++)
	{}
	arraycpy = malloc(counter * sizeof(char));
	if (arraycpy == NULL)
		return (NULL);
	limiter = counter;
	for (counter = 0; counter < limiter; counter++)
	{
		*(arraycpy + counter) = *(str + counter);
	}
	return (arraycpy);
}
