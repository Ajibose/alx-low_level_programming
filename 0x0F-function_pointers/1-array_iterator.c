#include "function_pointers.h"

/**
 * array_iterator - execute pointer to a function
 * @array: The array containing the arguments to be used
 * @size: Size of the array
 * @action: pointer to a function
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
	else
		return;
}
