#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* 1. Check if the grid actually exists */
	if (grid == NULL || height <= 0)
	{
		return;
	}

	/* 2. Free each row (the rooms inside each floor) */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 3. Free the grid itself (the main building structure) */
	free(grid);
}
