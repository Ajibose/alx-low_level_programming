#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: Double pointer to head node
 *
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head && *head)
	{
		temp = *head;
		*head = temp->next;
		data = temp->n;
		free(temp);
	}

	return (data);
}
