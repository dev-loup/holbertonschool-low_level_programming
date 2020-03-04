#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates arguments
 * @av: the content of the array
 * @ac: number of arguments
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	char *arrcpy;
	int counter;
	int scounter;

	if (ac == 0 || av == NULL)
		return (NULL);
	arrcpy = malloc(ac * (sizeof(char *)));
	for (counter = 0; counter < ac; counter++)
	{
		for (scounter = 0; av[counter][scounter] != '\0'; scounter++)
		{
			arrcpy[counter] = av[counter][scounter];
		}
	}
	return (arrcpy);
}
