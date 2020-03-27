#include "holberton.h"

/**
 * print_binary - converts unsigned int values to binary
 * @n: binary string
 * Return: voided.
 */

void print_binary(unsigned long int n)
{
	unsigned long int copy = n;
	char value;

	if (copy > 0)
	{
		copy >>= 1;
		print_binary(copy);
		value = (n & 1);
		_putchar(value + '0');
	}
	else
		_putchar('0');
}
