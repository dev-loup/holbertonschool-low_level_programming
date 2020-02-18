#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints integer values on array
 * @a: the array pointer
 * @n: number of positions to print
 *
 * Return: No returning
 */
void print_array(int *a, int n)
{
	int printer;

	for (printer = 0; printer < n; printer++)
	{
		printf("%d", *(a + printer));
		if (printer < n - 1)
			printf(", ");
	}
	printf("\n");
}
