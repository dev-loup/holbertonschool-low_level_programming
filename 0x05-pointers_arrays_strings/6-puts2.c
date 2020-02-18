#include "holberton.h"

/**
 * puts2 - prints a string jumping one value
 * @str: the string to print
 *
 * Return: No returning
 */
void puts2(char *str)
{
	int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(*(str + counter));
		counter = counter + 2;
	}
	_putchar('\n');
}
