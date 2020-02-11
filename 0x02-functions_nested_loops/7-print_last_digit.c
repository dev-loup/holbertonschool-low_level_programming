#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: number to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int a)
{
	int n;

	n = (a % 10);
	if (a < 0)
	{
		_putchar((n * -1) + '0');
		return (n * -1);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
