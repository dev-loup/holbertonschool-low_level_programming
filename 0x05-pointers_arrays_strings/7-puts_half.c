#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: No returning
 */
void puts_half(char *str)
{
	int counter;
	int half_counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
	}

	half_counter = counter / 2;

	for (; half_counter < counter; half_counter++)
	{
		_putchar(*(str + half_counter));
	}
	_putchar('\n');
}
