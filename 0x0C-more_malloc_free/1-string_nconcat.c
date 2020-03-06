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
	unsigned int counter1, counter2, upindex, index;
	char *array;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (counter1 = 0; s1[counter1] != '\0'; counter1++)
	{}
	for (counter2 = 0; s2[counter2] != '\0'; counter2++)
	{}
	if (counter2 < n)
		n = counter2;
	array = malloc((counter1 + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
	{
		array[index] = s1[index];
	}
	for (upindex = 0; upindex < n; upindex++)
	{
		array[index + upindex] = s2[upindex];
	}
	array[index + upindex] = '\0';
	return (array);
}
