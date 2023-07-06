#include "hash_tables.h"

/**
 * key_index - gets the index of a given key
 * @key: key to be hashed
 * @size: size ofthe  hash table
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
