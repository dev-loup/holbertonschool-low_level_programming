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
				putchar((n / 100) + '0');
			putchar(((n / 10) % 10) + '0');
			putchar((n % 10) + '0');
			n--;
		}
		else if (n < 0)
		{
			putchar('-');
			n = (n * -1);
			if (n >= 100)
				putchar((n / 100) + '0');
			putchar(((n / 10) % 10) + '0');
			putchar((n % 10) + '0');
			n--;
			n = (n * -1);
		}
		else if (n >= 0)
		{
			if (n > 10)
			{
				putchar((n / 10) + '0');
			}
			putchar((n % 10) + '0');
			n++;
		}
		putchar(',');
		putchar(' ');
	}
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	putchar('\n');
}
