#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		free(head->str);
		temp = head;
		head = head->next;
		free(temp);
	}
}
