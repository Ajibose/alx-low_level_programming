#include "lists.h"
#include "string.h"
/**
 * add_node - Adds node at the beginning of a linked list
 * @head: double pointer to the first node
 * @str: Data of the node to create
 *
 * Return: address of the new node created
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t chars;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	for (chars = 0; str[chars]; chars++)
		;
	temp->str = strdup(str);
	temp->len = chars;
	temp->next = *head;

	*head = temp;
	return (temp);
}
