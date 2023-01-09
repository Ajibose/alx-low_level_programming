#include "main.h"

/**
 * str_concat - Concatenates two string
 * @s1: first string
 * @s2: Second string
 *
 * Return: NULL or combined string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, n;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	s = malloc(1 + ((i - 1) * sizeof(*s1)) + ((j - 1) * sizeof(*s2)));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		*(s + k) = *(s1 + k);
	for (n = 0; n < j; n++, k++)
		*(s + k) =  *(s2 + n);
	s[k] = '\0';

	return (s);
}
