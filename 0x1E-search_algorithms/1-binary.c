#include "search_algos.h"
/**
 * binary_search - Perform binary search algorithm
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search for in the array
 *
 * Return: The index of value on sucess, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		print_array(l, r, array);

		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}

	return (-1);
}

/**
 * print_array - Prints an array
 * @l: Index to start printing
 * @r: Index to stop printing
 * @array: Array to print
 *
 * Return: void
 */
void print_array(int l, int r, int *array)
{
	while (l <= r)
	{
		if (l < r)
			printf("%d, ", array[l]);
		else
			printf("%d\n", array[l]);

		l++;
	}
}
