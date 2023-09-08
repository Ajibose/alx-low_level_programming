#include "hash_tables.h"

/**
 * key_index - compute the index to store the item in the array
 * @size: Size of the hash table array
 *
 * Return: index to store the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
