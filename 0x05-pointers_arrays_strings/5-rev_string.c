#include "holberton.h"

/**
 * rev_string - print reversed strings
 * @s: first pointer to the value
 *
 * Return: No returning
 */
void rev_string(char *s)
{
	int counter;
	char memo[100];
	int index =0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		memo[counter] = *(s + counter);
	}

	counter--;

	for (; counter >= 0;counter--)
	{
		*(s + index) = *(memo + counter);
		index++;
	}
	counter++;
}
