#include "holberton.h"

/**
 * reverse_array - reverse an integer array
 *
 * @a: string to reverse
 * @n: the int length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index;
	int copy[(n)];

	for (index = 0; index < n; index++)
	{
		*(copy + index) = *(a + index);
	}
	for (index = 0; n > 0; n--)
	{
		*(a + index) = *(copy + (n - 1));
		index++;
	}
}
