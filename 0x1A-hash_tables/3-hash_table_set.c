#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Address of hash table
 * @key: the new item key
 * @value: new item value
 *
 * Return: 1 0n success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *head;

	if (ht == NULL || !(*key) || !value)
		return (0);

	item = create_item(key, value);
	index = key_index((unsigned char *)key, ht->size);

	if (index > ht->size)
	{
		free(item);
		return (0);
	}

	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		head = ht->array[index];
		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
		head = ht->array[index];
		item->next = head->next;
		ht->array[index] = item;
	}
	return (1);
}

/**
 * create_item - createa new hash table item
 * @key: new item key
 * @value: new item value
 *
 * Return: Address of new item on success, 0 otherwise
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
	{
		free(item);
		return (0);
	}

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	return (item);
}
