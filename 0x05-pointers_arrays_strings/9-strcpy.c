#include "holberton.h"

/**
 * _strcpy - print a copy string
 * @src: string to copy
 * @dest: string to be written
 *
 * Return: No returning
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; *(src + n) != '\0'; n++)
	{}
	for (i = 0; i <= n; i++)
		dest[i] = src[i];

	return (dest);
}
