#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: variable to e copied into
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: p
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *p;

	while (src[i])
	{
		if (i < n)
			dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	p = dest;
	return (p);
}
