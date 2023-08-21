#include "main.h"

/**
 * _abs - Return the absolute value of a number
 * @n: number to be checked
 *
 * Return: res
 */

int _abs(int n)
{
	int res;

	if (n < 0)
		res = n * -1;
	else
		res = n;

	return (res);
}
