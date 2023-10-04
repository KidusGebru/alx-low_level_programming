#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to two dimensional array
 * @width: Number of cols
 * @height: Number of rows
 *
 * Return: Location in memory of array or Null
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		j = 0;

		if (arr[i] == NULL)
		{
			while (j <= i)
			{
				free(arr[j]);
				j++;
			}
			free(arr);
			return (NULL);
		}

		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
