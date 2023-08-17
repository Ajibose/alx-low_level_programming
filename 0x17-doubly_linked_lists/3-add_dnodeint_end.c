#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: double pointer to the head node
 * @n: new node's data
 *
 * Return: Address of new node on success, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
		temp->prev = ptr;
	}
	return (temp);
}
