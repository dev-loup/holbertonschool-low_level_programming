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
		if ((*d).name != NULL)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)");
		if ((*d).name != NULL)
			printf("Age: %f\n", (*d).age);
		else
			printf("Age: (nil)");
		if ((*d).name != NULL)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)");
	}
}
