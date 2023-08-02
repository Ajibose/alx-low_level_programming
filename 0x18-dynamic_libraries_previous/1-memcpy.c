#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to string
 * @src: pointer to a string
 * @n: no of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
