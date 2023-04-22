#include "lists.h"
/**
 * free_listint2 - Frees a linked list
 * @head: Double pointer to the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr = *head;

	if (ptr != NULL)
	{
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
		head = NULL;
	}
}
