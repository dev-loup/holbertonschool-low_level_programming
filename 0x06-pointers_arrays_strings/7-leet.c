#include "holberton.h"

/**
 * leet - lower to upper case
 * @a: string to upper
 *
 * Return: pointer a
 */
char *leet(char *a)
{
	int index;
	int incheck;
	int comp[] = "4433007711";
	char leet[] = "AaEeOoTtLl";

	for (index = 0; *(a + index) != '\0'; index++)
	{
		for (incheck = 0; *(leet + incheck) != '\0'; incheck++)
		{
			if (*(a + index) == *(leet + incheck))
				*(a + index) = *(comp + incheck);
		}
	}
	return (a);
}
