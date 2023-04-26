#include "lists.h"
/**
 * delete_nodeint_at_index - Frees a node at an index
 * @head: Double pointer to the first node
 * @index: Index of node to free
 *
 * Return: 1 on success
 * -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *temp;
	unsigned int count = 0;

	if (head && *head)
	{
		if (index == 0)
		{
			*head = ptr->next;
			free(ptr);
			return (1);
		}

		else
		{
			while (ptr != NULL && count < index - 1)
			{
				ptr = ptr->next;
				count++;
			}

			if (ptr == NULL || ptr->next == NULL)
				return (-1);
			temp = ptr->next;
			ptr->next = temp->next;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
