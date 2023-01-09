#include "main.h"

/**
 * create_array - Creates an array
 * @size: Length of the array
 * @c: The charcter to initialize the array to
 *
 * Return: NULL or the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	ar[size] = '\0';

	return (ar);
	free(ar);
}
