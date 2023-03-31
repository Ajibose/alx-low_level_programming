#include "variadic_functions.h"

/**
 * sum_them_all - Add all its parameters
 * @n: number of parameters
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, first, i;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	first = va_arg(ap, int);
	for (i = 0; i < n; first = va_arg(ap, int), i++)
		sum += first;
	return (sum);
}
