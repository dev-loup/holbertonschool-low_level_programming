#include "holberton.h"

/**
 * reverse_array - reverse an integer array
 * @a: string to reverse
 * @n: the int length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index;
	int copy;

	n = n - 1;

	for (index = 0; index < n; index++)
	{
		copy = *(a + index);
		*(a + index) = *(a + n);
		*(a + n) = copy;
		n--;
	}
}
