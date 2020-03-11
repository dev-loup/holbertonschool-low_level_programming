#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - creates an array of chars
 * @str: the content of the array
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *arraycpy;
	unsigned int counter;
	unsigned int limiter;

	if (str == NULL)
		return (NULL);
	for (counter = 0; str[counter] != '\0'; counter++)
	{}
	counter++;
	arraycpy = malloc(counter * sizeof(char));
	if (arraycpy == NULL)
		return (NULL);
	limiter = counter;
	for (counter = 0; counter < limiter; counter++)
	{
		*(arraycpy + counter) = *(str + counter);
	}
	return (arraycpy);
}
/**
 * new_dog - iniciates the new dog
 * @name: points to dog's name
 * @age: age of the dog
 * @owner: points to dog's owner
 * Return: new dog memory location
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_soul;
	char *pre_name;
	char *fut_owner;

	pre_name = _strdup(name);
	fut_owner = _strdup(owner);
	if (pre_name == NULL || fut_owner == NULL)
	{
		free(pre_name);
		free(fut_owner);
		return (NULL);
	}
	dog_soul = malloc(sizeof(dog_t));
	if (dog_soul == NULL)
	{
		free(pre_name);
		free(fut_owner);
		return (NULL);
	}
	(*dog_soul).name = pre_name;
	(*dog_soul).age = age;
	(*dog_soul).owner = fut_owner;
	return (dog_soul);
}
