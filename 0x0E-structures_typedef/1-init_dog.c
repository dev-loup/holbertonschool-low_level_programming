#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Django ID data
 * @d: initializes dog
 * @name: dog´s name
 * @age: how old it is
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
