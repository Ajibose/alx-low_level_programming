#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number whose sign is to be printed
 *
 * Return: 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
