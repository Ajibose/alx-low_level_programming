#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: The array to search
 * @size: Size of array to search
 * @value: Te value whose index to saerch for
 *
 * Return: index of the value on success
 * -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] != value)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);
		i++;
	}

	if (i == size)
	{
		return (-1);
	}

	printf("Value checked array[%ld] = %d\n", i, array[i]);
	return (i);
}
