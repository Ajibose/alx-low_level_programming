#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a node at a given position
 * @h: double pointer to the head node
 * @idx: position to insert new node
 * @n: new node's data
 *
 * Return: On success, Address of new node. NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *ptr = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	while (ptr->next != NULL)
	{
		if (i == idx - 1)
		{
			temp->next = ptr->next;
			temp->prev = ptr;
			temp->n = n;
			ptr->next->prev = temp;
			ptr->next = temp;
			return (temp);
		}
		ptr = ptr->next;
		i++;
	}

	if (ptr->next == NULL)
	{
		free(temp);
		temp = add_dnodeint_end(h, n);
	}

	return (temp);
}
