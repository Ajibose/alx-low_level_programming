#include "main.h"

/**
 * _strdup - Returns pointer to a copied string
 * @str: string to copy
 *
 * Return: NULL or pointer to the copied string
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
		;
	s = malloc(sizeof(*str) * i);
	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		*(s + j) = *(str + j);
	*(s + i) = *(str + i);

	return (s);
	free(s);
}
