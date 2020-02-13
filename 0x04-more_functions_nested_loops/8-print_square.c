#include "holberton.h"

/**
 * print_square - prints a square of n large
 *@n: input to check
 *
 * Return: no return.
 *
 */
void print_square(int n)
{
	int h;
	int a;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (h = 0; h < n; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
