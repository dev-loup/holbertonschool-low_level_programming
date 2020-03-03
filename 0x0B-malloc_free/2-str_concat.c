#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings
 * @s1: first array
 * @s2: second array to concatenate
 * Return: Array concatenated in new memory
 */
char *str_concat(char *s1, char *s2)
{
	char *arraycpy;
	unsigned int counter;
	unsigned int limiter;
	unsigned int switcher;

	if (s1 == NULL)
		return (NULL);
	for (counter = 0; s1[counter] != '\0'; counter++)
	{}
	limiter = counter;
	switcher = counter;
	for (counter = 0; s2[counter] != '\0'; counter++)
	{}
	limiter += counter;
	arraycpy = malloc(limiter * sizeof(char));
	if (arraycpy == NULL)
		return (NULL);
	for (counter = 0; counter < limiter; counter++)
	{
		if (counter < switcher)
			*(arraycpy + counter) = *(s1 + counter);
		else
			*(arraycpy + counter) = *(s2 + (counter - switcher));
	}
	return (arraycpy);
}
