#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to first element
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr  = h;
	int i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
