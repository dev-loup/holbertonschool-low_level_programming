#include "holberton.h"
/**
 * flip_bits - return flips need to get from a number to another
 * @n: Number 1
 * @m: Number goal
 * Return: flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp = n ^ m;
	unsigned long int num = 0;

	while (comp > 0)
	{
		num += (comp & 1);
		comp = comp >> 1;
	}
	return (num);
}
