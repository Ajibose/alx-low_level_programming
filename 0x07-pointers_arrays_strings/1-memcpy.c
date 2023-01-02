#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to string
 * @src: pointer to a string
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = dest[i];
		i++;
	}
	return (dest);
}
