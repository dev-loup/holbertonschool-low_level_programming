#include "holberton.h"

/**
 * _print_rev_recursion - prints inverse strings
 * @s: the string
 * Return: no returns
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
