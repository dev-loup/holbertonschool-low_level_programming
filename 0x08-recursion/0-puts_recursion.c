#include "holberton.h"

/**
 * _puts_recursion - prints a string with recursion.
 *
 * Return: no returns
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		putchar(*(s));
		++ s;
		_puts_recursion(s);
	}
}
