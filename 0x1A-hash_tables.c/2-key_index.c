#include "hash_tables.h"

/**
 * hash_djb2 - Implements djb2 Algorythm for sorting
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