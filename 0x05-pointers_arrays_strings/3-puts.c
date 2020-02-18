#include "holberton.h"

/**
 * _puts - prints the length of a string
 * @str: the string to print
 *
 * Return: No returning
 */
void _puts(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		_putchar(*(str + counter));
	}
	_putchar('\n');
}
