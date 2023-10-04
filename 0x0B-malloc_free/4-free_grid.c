#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated for 2D array
 * @grid: 2D array pointer
 * @height: Row count of the 2D array
 *
 * Return: Always void
 */

void free_grid(int **grid, int height)
{
	height--;
	while (height >= 0)
		free(grid[height]);

	free(grid);
}
