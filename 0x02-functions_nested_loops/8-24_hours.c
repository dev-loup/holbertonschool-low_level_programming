#include "holberton.h"

/**
 * jack_bauer - tick tack
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int j = 0;
	int b = 0;

	for (j = 0; j < 24; j++)
	{
		b = 0;

		for (b = 0; b < 60; b++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
