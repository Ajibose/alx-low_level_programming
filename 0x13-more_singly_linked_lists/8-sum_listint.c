#include "lists.h"

/**
 * sum_listint - Compute te sum of data(n) in a linked list
 * @head: Pointer to the head node
 *
 * Return: Sum of data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
