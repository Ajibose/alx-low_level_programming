#include "lists.h"

/**
 * print_dlistint - count the number of nodes in a linked list
 * @h: pointer to the head node
 *
 * Return: size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *ptr = h;

	if (h != NULL)
		while (ptr != NULL)
		{
			i++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}

	return (i);
}
