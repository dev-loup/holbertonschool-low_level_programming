#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: variable that need the space
 * Return: pointer to allocated space, null if fails
 */
void *malloc_checked(unsigned int b)
{
	int *space;

	space = malloc(b * sizeof(unsigned int));
	if (space == NULL)
	{
		exit(98);
	}
	else
	{
		return (space);
	}
}
