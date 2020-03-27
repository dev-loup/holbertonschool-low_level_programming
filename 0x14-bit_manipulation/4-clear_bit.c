#include "holberton.h"
/**
 * clear_bit - clean bit
 * @n: pointer to number with bit to clean
 * @index: where to clean
 * Return: 1 Success -1 if it exceeds bit limit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
