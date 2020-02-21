#include "holberton.h"

/**
 * rot13 - encodes and decodes strings
 * @a: string to upper
 *
 * Return: pointer a
 */
char *rot13(char *a)
{
	int index;
	int incheck;
	char comp[] = "NnOoPpQqRrSsTtUuVvXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char leet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvXxYyZz";

	for (index = 0; *(a + index) != '\0'; index++)
	{
		for (incheck = 0; *(leet + incheck) != '\0'; incheck++)
		{
			if (*(a + index) == *(leet + incheck))
			{
				*(a + index) = *(comp + incheck);
				break;
			}
		}
	}
	return (a);
}
