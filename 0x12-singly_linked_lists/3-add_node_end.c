#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a node at the end of a linked list
 * @head: double pointer to the first node
 * @str: node data
 *
 * Return: Address of new node on success
 * or NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = _strlen(str);
	temp->str = strdup(str);
	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		temp->next = ptr->next;
		ptr->next = temp;
	}

	return (temp);
}

/**
 * _strlen - counts the bytes in a word
 * @str: string to count
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	size_t nbytes;

	for (nbytes = 0; str[nbytes] != '\0'; nbytes++)
		;
	return (nbytes);
}
