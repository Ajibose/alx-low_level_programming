#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate a string and n bytes of another string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes for the second string
 *
 * Return: Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (n >= s2_len)
		s = malloc(sizeof(char) * (s2_len + s1_len));
	else
		s = malloc(sizeof(char) * (n + s1_len));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];

	if (n >= s2_len)
	{
		for (j = 0; j < s2_len; i++, j++)
			s[i] = s2[j];
	}
	else
	{
		for (j = 0; j <= n; i++, j++)
			s[i] = s2[j];
	}
	s[i] = '\0';

	return (s);
}
