#include "holberton.h"

/**
 * print_triangle - based on diagonal matrix width = size -1
 *@size: input to check
 *
 * Return: No return data
 *
 */
void print_triangle(int size)
{
	int h;
	int a;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (h = size; h - 1 > a; h--)
		{
			_putchar(' ');
		}
		for (h = 0; h - 1 < a; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
