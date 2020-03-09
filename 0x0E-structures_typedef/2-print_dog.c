#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - ID generator for Django
 * @d: dog data structure
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.1f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
