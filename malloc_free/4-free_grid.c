#include "main.h"
/**
 * free_grid - frees a 2d array of memory
 * @grid: 2d array to free
 * @height: height of grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
