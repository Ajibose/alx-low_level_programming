#include "lists.h"

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
