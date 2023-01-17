#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of elements of array
 * @size: Bytes of each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return ((void *)arr);
}
