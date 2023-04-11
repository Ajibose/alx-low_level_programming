#include "lists.h"
/**
 * list_len - compute the number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next
	}
	return (nodes);
}
