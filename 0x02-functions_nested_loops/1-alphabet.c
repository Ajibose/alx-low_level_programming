#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase folloed by a newline
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
}
