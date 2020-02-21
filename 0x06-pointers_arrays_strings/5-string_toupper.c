#include "holberton.h"

/**
 * string_toupper - lower to upper case
 * @a: string to upper
 *
 * Return: pointer a
 */
char *string_toupper(char *a)
{
	int index;

	for (index = 0; *(a + index) != '\0'; index++)
	{
		if (*(a + index) >= 'a' && *(a + index) <= 'z')
			*(a + index) = (*(a + index) - ' ');
	}
	return (a);
}
