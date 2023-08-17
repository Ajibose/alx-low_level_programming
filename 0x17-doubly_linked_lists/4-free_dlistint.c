#include "lists.h"

/**
 * free_dlistint - Frees a double linked list
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
		while (head != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
}
