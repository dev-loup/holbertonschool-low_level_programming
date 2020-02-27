#include "holberton.h"

/**
 * divisor_it - iterate divisions until prime or no response gotten
 * @n: number to determine
 * @x: iterator variable
 * Return: 0 negative or no prime, 1 prime
 */
int divisor_it(int n, int x)
{
	if (n < 2)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if (x == 1)
		return (1);
	else
		return (divisor_it(n, (x - 1)));
}

#include "holberton.h"

/**
 * is_prime_number - take the number and send it to iterator
 * @n: number to determine
 * Return: iterator response 0 no prime or negative, 1 prime
 */
int is_prime_number(int n)
{
	int x;

	x = (n - 1);

	x = (divisor_it(n, x));
	return (x);
}
