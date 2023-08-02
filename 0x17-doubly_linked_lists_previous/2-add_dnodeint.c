#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of a double linked list
 * @head: double pointer to the first node
 * @n: data to be inserted in the node
 *
 * Return: The address of the new node on success
 * otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *temp;

	ptr = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = ptr;
	if (ptr)
		ptr->prev = temp;

	*head = temp;
	return (temp);
}
