#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a linked list
 * @h: pointer to the head node
 *
 * Return: size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *ptr = h;

	if (h != NULL)
		while (ptr != NULL)
		{
			i++;
			ptr = ptr->next;
		}

	return (i);
}
