#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array where to look
 * @size: limit of searching
 * @cmp: comparer function
 * Return: -1 on no matching or size <= 0
 * returns index of the element gotten by cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int counter;

	if (array && size && cmp)
		for (counter = 0; counter < size; counter++)
		{
			if (cmp(array[counter]) != 0)
				return (counter);
		}
	return (-1);
}
