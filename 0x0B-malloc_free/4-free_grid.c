#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function frees 2d grid previously created
 * @grid: 2d grid
 * @height: array's height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
