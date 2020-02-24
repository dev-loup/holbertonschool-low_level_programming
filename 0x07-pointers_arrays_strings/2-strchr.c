#include "holberton.h"

/**
 * _strchr - locates character in a string
 *
 * @s: the byte to write
 * @c: the objective to locate
 * Return: Returns pointer
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (0);
}
