#include "holberton.h"

/**
 * print_to_98 - prints the absolute sequence to 98
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	do {
		if (n > 98)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar(((n /10) % 10) + '0');
				_putchar((n % 10) + '0');
			       	n--;
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				n--;
			}
		}
		if (n < 98)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				n++;
			}
			else if (n <= 9 && n >= 0)
			{
				_putchar((n % 10) + '0');
				n++;
			}
			else if (n < 0 && n > -10)
			{
				n = (n * -1);
				_putchar('-');
				_putchar((n % 10) + '0');
				_putchar(' ');
				n--;
				n = (n * -1);
			}
			else if (n <= -9 && n > -100)
			{
				n = (n* -1);
				_putchar('-');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				n--;
				n = (n * -1);
			}
		}
		_putchar(',');
		_putchar(' ');
	} while (n != 98);
	_putchar((n/10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
