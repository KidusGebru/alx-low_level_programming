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
	int **arr = malloc(height * sizeof(int *));
	int i = 0, j;

	if (width <= 0 || height <= 0 || arr == NULL)
		return (NULL);

	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		j = 0;

		if (arr[i] == NULL)
			return (NULL);

		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
