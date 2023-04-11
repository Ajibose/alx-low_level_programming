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
	list_t *ptr = *head;
	list_t *temp = malloc(sizeof(list_t));
	char *s = malloc(sizeof(str));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	if (S == NULL)
	{
		free(s);
		return (NULL);
	}
	s = strdup(str);

	temp->str = s;
	temp->len = strlen(temp->str);
	temp->next = ptr;

	*head = temp;
	return (temp);
}
