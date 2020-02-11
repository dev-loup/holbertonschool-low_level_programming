#include "holberton.h"

/**
 * times_table - prints the table from 0 to 9
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int n;
	int m;
	int r;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
		r = (n * m);
		if (r <= 9)
		{
			if (r == 0 && n == 0)
				_putchar(r + '0');
				else
				{
					_putchar(' ');
					_putchar(r + '0');
				}
		}
		else
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}

		if (n < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		else
			_putchar('\n');
		}
	}
}
