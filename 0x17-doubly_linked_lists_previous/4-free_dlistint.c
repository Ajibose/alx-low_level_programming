#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
