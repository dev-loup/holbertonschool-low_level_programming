#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars
 * @c: the content of the array
 * @size: the size of the array
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (counter = 0; counter < size; counter++)
	{
		*(array + counter) = c;
	}
	return (array);
}
