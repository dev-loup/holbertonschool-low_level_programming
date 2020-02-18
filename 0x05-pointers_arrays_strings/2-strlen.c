#include "holberton.h"

/**
 * _strlen - prints the length of a string
 * @s: the string to measure
 *
 * Return: No returning
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{}
	return (counter);

}
