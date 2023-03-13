#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - Frees a 2 diemtional grid previously created by alloc_grid.
 * @grid: 2 dimentional array of integers to be freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
