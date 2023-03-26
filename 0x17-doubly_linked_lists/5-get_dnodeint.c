#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at an index
 * @head: pointer to the first node
 * @index: index of node to get
 *
 * Return: pointer to the node to find
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = head;

	if (ptr == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
