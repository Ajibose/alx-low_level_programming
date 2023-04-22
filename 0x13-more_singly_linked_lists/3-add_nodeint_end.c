#include "lists.h"
/**
 * add_nodeint_end - Adds a node to the end of a linked list
 * @head: Double pointer to the first node
 * @n: New node's data
 *
 * Return: Address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	else
	{
		*head = temp;
	}
	return (temp);
}
