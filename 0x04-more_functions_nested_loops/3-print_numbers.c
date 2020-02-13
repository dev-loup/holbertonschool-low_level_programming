#include "holberton.h"

/**
 * print_numbers - print a sequence from 0 to 9
 *
 * automated sequence to variable needed
 * Return: no returns
*/
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
