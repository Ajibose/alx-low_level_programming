#include "main.h"

/**
 * _strncat - concatenates two stringswith a max
 *  of n bytes from one of the strings
 * @dest: first string
 * @src: second string
 * @n: maximum number of bytes to be added from the 2nd string
 *
 * Return: p
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *p;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j < n)
			dest[i] = src[j];
		i++;
		j++;
	}

	if (j < n)
		dest[i] = '\0';
	p = dest;
	return (p);
}
