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

	array = malloc(size * sizeof(char));
	for (counter = 0; counter < size; counter++)
	{
		*(array + counter) = c;
	}
	return(array);
}
