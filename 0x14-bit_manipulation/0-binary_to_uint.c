#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int values
 * @b: binary string
 * Return: unsigned value of zero if it fails.
 */

unsigned int binary_to_uint(const char *b)
{
	int power = 0;
	unsigned int result = 0;
	unsigned int digit;

	if (!b)
		return (0);
	while (b[power])
	{
		digit = b[power] - 48;
		if (digit == 0 || digit == 1)
		{
			result += digit;
			if (b[power + 1])
				result <<= 1;
		}
		else
			return (0);
		power++;
	}
	return (result);
}
