#include "holberton.h"

/**
 * _isalpha - checks alpha input
 *@c: the letter to check
 *
 * Return: O if it's not a letter, 1 if is letter
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
else
		return (0);
}
