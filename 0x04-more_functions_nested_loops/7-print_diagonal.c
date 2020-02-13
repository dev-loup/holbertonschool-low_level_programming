#include "holberton.h"

/**
 * print_diagonal - prints a diagonal of n large
 *@n: input to check
 *
 * Return: On success 1.
 * On error or no uppercase, 0 is returned.
 */
void print_diagonal(int n)
{
	int hor;
	int aba;
	int n = 4;

	for (aba = 0; aba <= n; a++)
	{
		for (hor = 0; hor < aba; n++)
		{
			_putchar(" ");
		}
		_putchar('\\');
		_putchar('\n');
	}
}
