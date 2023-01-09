#include "main.h"

/**
 * alloc_grid - creates an array and initializeit to 0
 * @height: row of the array
 * @width: column of the array
 *
 * Return: NULL or two_array
 */

int **alloc_grid(int width, int height)
{
	int **two_arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_arr = malloc(sizeof(int *) * height);
	if (two_arr == NULL)
	{
		free(two_arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(two_arr + i) = malloc(sizeof(int) * width);
		if (*(two_arr + i) == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(two_arr[i]);
			}
			free(two_arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			two_arr[i][j] = 0;
	}
	return (two_arr);
}
