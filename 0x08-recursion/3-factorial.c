#include "holberton.h"

/**
 * _print_rev_recursion - prints inverse strings
 * @s: the string
 * Return: no returns
 */

int factorial(int n)
{
	int counter;

	if (n < 0)
		return(-1);
	if (n > 0)
	{
		counter = (factorial(n - 1));
		return (counter * n);
	}
	else
		return(1);
}
