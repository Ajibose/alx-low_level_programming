#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to the first node
 * @n: data to add
 *
 * Return: Address of the new node
 * or NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;
	if (*head)
	{
		return NULL;
	}

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return 
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;
	temp->data = n;
	temp->next = NULL;
	return (temp);
}
