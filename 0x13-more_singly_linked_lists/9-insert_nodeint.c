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
		free(temp);
		return (NULL);
	}

	if (head && *head)
	{
		while (ptr != NULL)
		{
			if (idx - 1 == count)
			{
				temp->next = ptr->next;
				ptr->next = temp;
			}
			ptr = ptr->next;
			count++;
		}
	}
	else if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	}
	temp->n = n;
	return (temp);
}
