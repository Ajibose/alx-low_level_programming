#include "lists.h"

/**
 * sum_dlistint - compute the sum of all data in a linked list
 * @head: pointer to the first node
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
