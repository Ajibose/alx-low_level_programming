#include "lists.h"
/**
 * get_nodeint_at_index - Gets the address of nth node of a linked list
 * @head: Pointer to head node
 * @index: Position of node whose address to get
 *
 * Return: Address of node to get
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
