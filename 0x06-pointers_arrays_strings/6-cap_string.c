#include "holberton.h"

/**
 * cap_string - capitalize the first letter of words
 * @a: string to upper
 *
 * Return: pointer a
 */
char *cap_string(char *a)
{
	int index;

	for (index = 0; *(a + index) != '\0'; index++)
	{
		if ((*(a + (index - 1)) == 32) ||
		    (*(a + (index - 1)) == 9) ||
		    (*(a + (index - 1)) == '\n') ||
		    (*(a + (index - 1)) == ',') ||
		    (*(a + (index - 1)) == ';') ||
		    (*(a + (index - 1)) == '.') ||
		    (*(a + (index - 1)) == '!') ||
		    (*(a + (index - 1)) == '?') ||
		    (*(a + (index - 1)) == '"') ||
		    (*(a + (index - 1)) == '(') ||
		    (*(a + (index - 1)) == ')') ||
		    (*(a + (index - 1)) == '{') ||
		    (*(a + (index - 1)) == '}') ||
		    (*(a + (index - 1)) == '\0'))
			if (*(a + index) >= 'a' && *(a + index) <= 'z')
			{
				*(a + index) = (*(a + index) - ' ');
			}
	}
	return (a);
}
