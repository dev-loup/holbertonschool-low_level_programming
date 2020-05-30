#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Adds a value to a hash table
 *
 * @ht: hash table
 * @key: index parameter
 * Return: value on success, NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *runner;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	runner = ht->array[index];
	while (runner)
	{
	if (runner->key)
	{
		if (strcmp(runner->key, key) == 0)
		{
			return (runner->value);
		}
	}
	runner = runner->next;
	}
	return (NULL);
}
