#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, first;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n && n != 0; i++)
	{
		first = va_arg(ap, int);
		printf("%d", first);
		if (i < (n - 1))
		{
			if (separator)
				printf("%s", separator);
		}
		else
			printf("\n");
	}
	va_end(ap);
}
