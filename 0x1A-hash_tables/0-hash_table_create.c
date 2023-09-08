#include "hash_tables.h"

/**
 * hash_table_create - Create the hash table
 * @size: size of the hash table array
 *
 * Return: Pointer to a new created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table= malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t*) * size);
	if (table->array == NULL)
	{
		free(table->array);
		free(table);
		return (NULL);
	}

	return (table);
}
