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
	int h;
	int a;

	if (n <= 0)
		_putchar('\n');
	for (a = 1; a <= n; a++)
	{
		for (h = 1; h < a; h++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
