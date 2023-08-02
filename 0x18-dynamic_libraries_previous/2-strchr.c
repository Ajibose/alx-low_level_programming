#include "main.h"

/**
 * _strchr - Loctes a character in a string
 * @s: The string to be checked
 * @c: The character to be located
 *
 * Return: s or Null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
			return (s);
	}
	return (0);
}
