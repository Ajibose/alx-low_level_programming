#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Bytes to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str  = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
