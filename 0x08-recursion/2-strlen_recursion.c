#include "holberton.h"

/**
 * _strlen_recursion - measure a string
 * @s: the string
 * Return: no returns
 */

int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;
	if (*s != '\0')
	{
		counter = (1 + _strlen_recursion(s + 1));
	}
	return (counter);
}
