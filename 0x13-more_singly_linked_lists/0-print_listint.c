#include "lists.h"

/**
 * print_listint - counts the number of elements in a linked list
 * @h: pointer to the first element
 *
 * Return: Number of elements
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr  = h;
	int i = 0;

	while (ptr != NULL)
	{
		i++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
