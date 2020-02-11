#include "holberton.h"

/**
 * _abs - determines the absolute value of an integer
 *@a: value for absolute
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int a)
{
	if (a >= 0)
		return (a * 1);
	else if (a < 0)
		return (a * -1);
	return (0);
}
