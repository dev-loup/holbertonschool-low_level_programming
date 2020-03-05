#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: number of elements
 * @size: the size of the element
 *
 * Return: Pointer to the element or null if nmemb, size or malloc null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *callocer;
	unsigned int allocer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	callocer = malloc(nmemb * size);
	if (callocer == NULL)
		return (NULL);
	for (allocer = 0; allocer < nmemb; allocer++)
	{
		callocer[allocer] = 0;
	}
	return (callocer);
}
