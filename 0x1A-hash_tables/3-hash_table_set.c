#include "hash_tables.h"
#include <string.h>

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

	if (!ht || !key)
	{
		return (0);
	}
	val_index = key_index((const unsigned char *)key, ht->size);
	runner = ht->array[val_index];
	while (runner)
	{
		if (runner->key)
		{
			if (strcmp(runner->key, key) == 0)
			{
				free(runner->value);
				runner->value = strdup(value);
				return (1);
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
