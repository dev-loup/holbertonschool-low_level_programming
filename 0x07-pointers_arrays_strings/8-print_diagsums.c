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
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size * size; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < size * size - 1; i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);

}
