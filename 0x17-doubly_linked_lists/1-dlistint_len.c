#include "lists.h"

/**
 * print_dlistint - count elements in a double linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}