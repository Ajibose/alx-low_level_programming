#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: pointer to a hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
