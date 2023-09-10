#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	printf("%ld\n", sizeof(hash_node_t));
	printf("%ld", ht->size / sizeof(hash_node_t));
	return (0);
}
