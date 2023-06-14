#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid
 * @grid: 2D grid freed
 * @height: the height dimension of grid
 * Description: frees memory of grid
 * Return: none
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
