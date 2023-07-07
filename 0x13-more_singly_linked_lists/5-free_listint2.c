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

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}