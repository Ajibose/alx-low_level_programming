#include "variadic_functions.h"

/**
 * print_strings - prints numbers
 * @separator: pointer to the string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < (n - 1) && n != 0)
	{
		if (separator)
		{
			printf("%s%s", va_arg(ap, char *), separator);
		}
		else
		{
			printf("%s", va_arg(ap, char *));
		}
	}
	printf("%s", va_arg(ap, char *));
	va_end(ap);
}
