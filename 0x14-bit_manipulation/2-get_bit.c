#include "holberton.h"

/**
 * get_bit - get bit in position
 * @n: binary string
 * @index: index to check
 * Return: bit in position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int copy = n;

	if (index > ((sizeof(unsigned long int) * 8) + 1))
	    return (-1);
	copy >>= index;
	if ((copy & 1) == 1)
		return (1);
	else
		return (0);

}
