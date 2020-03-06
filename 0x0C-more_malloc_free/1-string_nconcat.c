#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - allocates memory
 * @s1: first variable to concatenate
 * @s2: second one to concatenate
 * @n: the size of the second line
 * Return: pointer to allocated space, null if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter, counter2, limiter, index;
	char *array;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (counter = 0; s1[counter] != '\0'; counter++)
	{}
	for (counter2 = 0; s2[counter2] != '\0'; counter2++)
	{}
	if (counter2 < n)
	{
		limiter = (counter + counter2) + 1;
		array = malloc(limiter * sizeof(char));
	}
	else
	{
		limiter = (counter + n) + 1;
		array = malloc(limiter * sizeof(char));
	}
	for (index = 0; index <= limiter; index++)
	{
		if (index < counter)
		{
			array[index] = s1[index];
		}
		else if (index < (limiter - 1) && index >= counter)
		{
			array[index] = s2[index - counter];
		}
	}
	return (array);
}
