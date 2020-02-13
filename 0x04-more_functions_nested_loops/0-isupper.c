#include "holberton.h"

/**
 * _isupper - checks uppercase input
 *@c: the letter to check
 *
 * Return: On success 1.
 * On error or no uppercase, 0 is returned.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
