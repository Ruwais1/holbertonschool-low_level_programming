#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* 1. Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* 2. Allocate memory for the rows (array of pointers) */
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	/* 3. Allocate memory for each row (the columns) */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		/* If a row allocation fails, free everything allocated so far */
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* 4. Initialize each element to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
