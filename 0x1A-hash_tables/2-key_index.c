#include "hash_tables.h"

/**
 * key_index - get an index from hash key
 * items in indexes
 *
 * @key: value to index
 * @size: Size of the hash table
 * Return: hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
