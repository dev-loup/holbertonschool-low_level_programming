#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char c;
	int n = 1;

	for (n = 1; n <= 10; n++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	}
}
