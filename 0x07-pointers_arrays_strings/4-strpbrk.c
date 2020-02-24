#include "holberton.h"

/**
 * _strpbrk - returns a pointer to the first coincidence with a sequence
 * @s: string to review
 * @accept: the sequence
 *
 * Return: Returns null if there is no sequence
 */
char *_strpbrk(char *s, char *accept)
{
	int index, index2, cutter;

	cutter = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index] == accept[index2])
			{
				return (&s[index]);
				cutter += 1;
			}
		}
	}
	if (cutter > 0)
		return (0);
}
