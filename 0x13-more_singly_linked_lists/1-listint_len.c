#include "lists.h"
/**
 * listint_len - Count the number of nodes in a list
 * @h: Pointer to the first node of a list
 *
 * Return: no of odes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes  = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
