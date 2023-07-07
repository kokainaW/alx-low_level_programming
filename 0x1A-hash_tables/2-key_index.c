#include "hash_tables.h"

/**
 * key_index - it gets index for key given
 * @key: key (string) to hash
 * @size: the size of hash table
 *
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
