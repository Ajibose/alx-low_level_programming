#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table
 * @key: Key of item to retrieve
 *
 * Return: on success, Value of key; NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *hash_node;

	if (ht == NULL || key == NULL || !(*key))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[index];

	while (hash_node != NULL && strcmp(hash_node->key, key) != 0)
	{
		hash_node = hash_node->next;
	}

	if (hash_node != NULL)
		return (hash_node->value);

	return (NULL);
}
