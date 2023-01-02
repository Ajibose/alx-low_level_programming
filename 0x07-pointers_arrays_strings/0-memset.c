#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: Pointer to a string
 * @b: The byte to be filled
 * @n: number of byte to be filled in the string
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
