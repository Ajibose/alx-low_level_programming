#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char comma_flag = 0;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			print_linkedList(ht->array[i]);
			comma_flag = 1;
		}
		i++;
	}
	printf("}\n");
}

/**
 * print_linkedList - print a linked list
 * @h: pointer to the head node
 *
 * Return: void
 */
void print_linkedList(hash_node_t *h)
{
	hash_node_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("'%s': ", ptr->key);
		printf("'%s'", ptr->value);
		ptr = ptr->next;
		if (ptr != NULL)
			printf(", ");
	}
}
