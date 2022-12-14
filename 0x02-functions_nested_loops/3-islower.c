#include "main.h"

/**
 * _islower - A function  that checks if a character in lowercase
 * @c: The number to be checked
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if ((c < 'a') && (c > 'z'))
		return (0);
	else
		return (1);
}
