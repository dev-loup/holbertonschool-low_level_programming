#include "holberton.h"

/**
 * print_most_numbers - print a sequence from 0 to 9 no 2 or 4 allowed
 *
 * automated sequence to variable needed
 * Return: no returns
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar('\n');
}
