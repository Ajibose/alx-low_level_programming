#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at a position
 * @head: Double pointer to the head node
 * @idx: index to insert node
 * @n: New node data
 *
 * Return: Address of new node on success
 * or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr = *head, *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;

	if (idx == 0)
	{
		temp->next = ptr;
		*head = temp;
		return (temp);
	}
	else if (idx > 0)
	{
		while (ptr != NULL && count < idx - 1)
		{
			ptr = ptr->next;
			count++;
		}
		temp->next = ptr->next;
		ptr->next = temp;
		return (temp);
	}

	free(temp);
	return (NULL);
}
