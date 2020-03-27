#include "holberton.h"
/**
 * set_bit - put bit at given position
 * @n: Number to modify
 * @index: position of bit
 * Return: 1 Success or -1 if index exceeds bits limit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);
	*n ^= 1 << index;

	return (1);
}
