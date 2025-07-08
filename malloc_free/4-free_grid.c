#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: the pointers to table in free grid
 * @height: this is the table height (number of columns)
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
