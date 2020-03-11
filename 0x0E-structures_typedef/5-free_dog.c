#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Purge dogs from memory
 * @d: the objective
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
