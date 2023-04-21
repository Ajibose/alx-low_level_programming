#include "lists.h"
/**
 * add_nodeint - Add a node to the beginning of a linked list
 * @head: Double pointer to the first node
 * @n: New node data
 *
 * Return: Address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));
	
	if (temp ==  NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = ptr;

	*head = temp;
	return (temp);
}
