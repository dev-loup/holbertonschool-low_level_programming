#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - Adds a value to a hash table
 *
 * @ht: hash table
 * @key: index parameter
 * @value: value to index
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int val_index;
	hash_node_t *runner;

	val_index = key_index((const unsigned char *)key, ht->size);
	runner = ht->array[val_index];
	while (runner)
	{
		if (runner->value)
		{
			if (strcmp(runner->value, value) == 0)
			{
				return (0);
			}
		}
		runner = runner->next;
	}

	runner = malloc(sizeof(hash_node_t));
	if (!runner)
	{
		free(runner);
		return (0);
	}
	runner->key = strdup(key);
	runner->value = strdup(value);
	runner->next = ht->array[val_index];
	ht->array[val_index] = runner;

	return (1);
}
