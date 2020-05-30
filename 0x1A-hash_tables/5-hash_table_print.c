#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *runner;
	int comma = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			runner = ht->array[index];
			while (runner)
			{
				if (comma != 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", runner->key, runner->value);
				runner = runner->next;
				comma = 1;
			}
		}
	}
	printf("}\n");
}
