#include "holberton.h"

/**
 * _sqrt2 - get the root
 * @n: number to root
 * @x: result
 * Return: result
 */

int _sqrt2(int n, int x)
{
	if ((x * x) > n)
		return (-1);
	else if ((x * x) == n)
		return (x);
	x++;
	_sqrt2(n, x);
}

/**
 * _sqrt_recursion - get the root
 * @n: number to root
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (_sqrt2(n, 2));
}
