#include "hash_tables.h"

/**
 * hash_table_create - Set a hash table
 * @size: hash table size
 * Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table;

    table = malloc(sizeof(hash_table_t));
    if (table == NULL)
    {
        return (NULL);
    }
    table->size = size;
    table->array = calloc(size, sizeof(hash_node_t *));
    if (table->array == NULL)
    {
        free(table);
        return (NULL);
    }
    return (table);
}