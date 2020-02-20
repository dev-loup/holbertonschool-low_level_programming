#include "holberton.h"

/**
 * _atoi - converts strings to integer
 * @s: the string
 *
 * Return: return the value
 */
int _atoi(char *s)
{
	int index = 0;
	int saver = 0;
	int symbol = 1;
	int breaker = 0;

	while (*(s + index) != '\0' && breaker < 1)
	{
		if (*(s + index) == '-')
			symbol *= -1;

		while (*(s + index) >= '0' && *(s + index) <= '9')
		{
			breaker = 1;
			if (saver == 0)
				saver = (*(s + index) - '0');
			else
			{
				saver *= 10;
				saver = saver + (*(s + index) - '0');
			}
			index++;
		}
		index++;
	}
	saver *= symbol;

	return (saver);
}
