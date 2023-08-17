#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a linked list
 * @head: double pointer to the head node
 * @n: the new node data
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	ptr->prev = temp
	*head = temp;
	return (temp);
}

