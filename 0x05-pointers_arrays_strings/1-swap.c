#include "holberton.h"

/**
 * swap_int - modifies memory value to swap variable of two vars
 * @a: first pointer to the value
 * @b: second pointer to the value
 *
 * Return: No returning
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
