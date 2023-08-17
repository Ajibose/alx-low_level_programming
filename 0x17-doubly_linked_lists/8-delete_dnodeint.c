#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given position
 * @head: double pointer to the head node
 * @index: position of index to delete
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (ptr != NULL)
	{
		if (i == index)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}


