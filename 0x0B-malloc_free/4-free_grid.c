#include "main.h"

/**
 * free-grid - free the 2D array created in previously commited file
 * Description: compiles with file 3
 * @grid: number of rows tp be freed
 * @height: number of columns to be freed
 * Return: pointer or NULL
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
