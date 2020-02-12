#include "holberton.h"

/**
 * print_to_98 - prints the values between n value and 98
 * @n: the value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{

	do {
		int m;

		if (n > 99 || n < -99)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				n--;
			}
			else
			{
				m = n;
				n = (m * -1);
				_putchar('-');
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				n--;
				m = n;
				n = (m * -1);
			}
		}
		else if (n > 9 || n < -9)
		{
			if (n > 0)
			{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
			}
			else
			{
				m = n;
				n = (m * -1);
				_putchar('-');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				n--;
				m = n;
				n = (m * -1);
			}
		}
		else if (n >= -9 && n <= -1)
		{
			m = n;
			n = (m * -1);
			_putchar('-');
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
			m = n;
			n = (m * -1);
		}
		else
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}

	} while (n <= 98);
	_putchar('\n');
}
