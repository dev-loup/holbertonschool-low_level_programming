#include "holberton.h"

/**
 * print_line - print a line
 * @n: input to check
 *
 * Return: no return
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');

	_putchar('\n');
}
