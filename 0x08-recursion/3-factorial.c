#include "holberton.h"

/**
 * factorial - gets factorial
 * @n: the string
 * Return: returns factorial value
 */

int factorial(int n)
{
	int counter;

	if (n < 0)
		return (-1);
	if (n > 0)
	{
		counter = (factorial(n - 1));
		return (counter * n);
	}
	else
		return (1);
}
