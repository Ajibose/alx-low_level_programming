#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: Address of pointer to first element
 * @n: value of element to add
 *
 * Return: pointer to element to add
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		ptr = temp;
		return (temp);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	return (temp);
}
