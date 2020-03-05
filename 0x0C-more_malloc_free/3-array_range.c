#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: begin limiter
 * @max: end limiter
 * Return: pointer to allocated space, null if fails
 */
int *array_range(int min, int max)
{
	int *array, counter, size = max - min;

	if (size < 0)
	{
		return (NULL);
	}
	else
		size++;
	array = malloc(size * sizeof(int));
	if (array != NULL)
	{
		for (counter = 0; min <= max; counter++)
		{
			array[counter] = min;
			min++;
		}
	}
	return (array);
}
