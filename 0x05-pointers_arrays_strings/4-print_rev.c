#include "holberton.h"

/**
 * print_rev - print reversed strings
 * @s: first pointer to the value
 *
 * Return: No returning
 */
void print_rev(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
	}
	counter--;

	for (; counter >= 0; counter--)
	{
		_putchar(*(s + counter));
	}
	_putchar('\n');
}
