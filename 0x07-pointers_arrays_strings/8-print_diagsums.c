#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sums diagonals of a square
 * @a: the square of integers
 * @size: the size of the square
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int diag1;
	int diag2;
	int index;

	diag1 = 0;
	diag2 = 0;
	for (index = 0; index <= size; index++)
	{
		diag1 += a[index + (size * index)];
	}
	printf("%i, ", diag1);
	for (index = 0; index <= size; index++)
		diag2 += a[(size - 1) * index];
	size--;
	printf("%i\n", diag2);
}
