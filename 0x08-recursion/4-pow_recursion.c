#include "holberton.h"

/**
 * _pow_recursion - multiplies a number by itself, n times
 * @x: the number
 * @y: times to raise
 * Return: number raised
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	else if (y > 1)
	{
		power = (_pow_recursion(x, (y - 1)) * x);
		return (power);
	}
}
