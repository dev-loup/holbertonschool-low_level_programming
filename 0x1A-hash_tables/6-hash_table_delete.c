#include "hash_tables.h"

/**
 * hash_table_delete - Erase a hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *runner;
	hash_node_t *temp;

	if (!ht)
	{
		return;
	}
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			runner = ht->array[index];
			while (runner)
			{
				temp = runner;
				runner = runner->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
