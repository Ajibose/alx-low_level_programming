#include "lists.h"
/**
 * print_list - print all the elents of a linked list
 * @h: Pointer to the first node
 *
 * Return: No of nodes on success
 * or 0 otherwise
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodes);
}
