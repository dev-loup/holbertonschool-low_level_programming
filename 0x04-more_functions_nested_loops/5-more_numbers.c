#include "holberton.h"

/**
 * more_numbers - print a sequence from 0 to 10 in loop 10 times
 *
 * automated sequence to variable needed
 * Return: no returns
*/
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
				_putchar(a + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
