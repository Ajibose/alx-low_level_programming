#include "lists.h"

/**
 * sum_dlistint - Compute the sum of all the data(n) of a double linked list
 * @head: poiner to the head node
 *
 * Return: sum of data of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head != NULL)
	{
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
