#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid- frees 2d grid
 * @grid: grid pointer
 * @height: height of pointer
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
