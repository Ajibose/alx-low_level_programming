#include "function_pointers.h"

/**
 * print_name - Prints a name using a pointer to a function
 * @name: name to print
 * @f: pointer to function helps to print the name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
