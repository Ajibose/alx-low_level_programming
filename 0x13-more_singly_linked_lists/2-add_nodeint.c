#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: address of the pointer that points to the first element
 * @n: value of added element
 *
 * Return: pointer to first element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = ptr;

	ptr = temp;
	return (ptr);
}
