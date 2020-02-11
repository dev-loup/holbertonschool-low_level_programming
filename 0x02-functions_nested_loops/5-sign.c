#include "holberton.h"

/**
 *print_sign - print +, 0, or - according to the number
 *@n: the letter to check
 *
 * Return: O if it's zero, 1 if is possitive, -1 is negative
 * On error
 */
int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
