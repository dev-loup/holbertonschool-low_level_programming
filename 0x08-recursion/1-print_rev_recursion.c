#include "holberton.h"

/**
 * _print_rev_recursion - prints inverse strings
 * @s: the string
 * Return: no returns
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		s++;
		_putchar(*(s));
		_print_rev_recursion(s);
	}
}
