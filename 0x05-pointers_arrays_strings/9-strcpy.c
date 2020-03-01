#include "holberton.h"

/**
 * _strcpy - print a copy string
 * @src: string to copy
 * @dest: string to be written
 *
 * Return: No returning
 */
char _strcpy(char *dest, char *src)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		*(dest + counter) = *(src + counter);
	}
	counter--;
}
