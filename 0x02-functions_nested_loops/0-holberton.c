#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'H';

	do {
	_putchar(c);
	if (c == 'H')
		c = 'o';
	else if (c == 'o')
		c = 'l';
	else if (c == 'l')
		c = 'b';
	else if (c == 'b')
		c = 'e';
	else if (c == 'e')
		c = 'r';
	else if (c == 'r')
		c = 't';
	else if (c == 't')
		c = 'z';
	} while (c != 'z');

	c = 'o';

	do {
		_putchar(c);
	if (c == 'o')
		c = 'n';
	else if (c == 'n')
		c = '\n';
	else if (c == '\n')
		c = 'z';
	} while (c != 'z');

return (0);
}
