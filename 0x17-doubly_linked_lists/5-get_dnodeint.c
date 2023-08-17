#include "lists.h"

/**
 * get_dnodeint_at_index - Finds the nth node of a linked list
 * @head: pointer to the head node
 * @index: position of node to find
 *
 * Return: Address of node to find on success, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	if (head != NULL)
		while (ptr != NULL)
		{
			if (i == index)
				return (ptr);
			ptr = ptr->next;
			i++;
		}
	return (NULL);
}
