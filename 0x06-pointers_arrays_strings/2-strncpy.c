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
	int i = 0, j = 0;
	char *p;

	while (src[j])
	{
		if (j < n)
			dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	p = dest;
	return (p);
}
