#include "holberton.h"

/**
 * print_to_98 - prints the absolute sequence to 98
 *
 * @n: defines the initial value
 * Return: void no returns
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 98)
		{
			if (n >= 100)
				_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			n--;
		}
		else if (n < 0)
		{
			_putchar('-');
			n = (n * -1);
			if (n >= 100)
				_putchar((n / 100) + '0');
			if (n >= 10)
				_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			n--;
			n = (n * -1);
		}
		else if (n >= 0)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
