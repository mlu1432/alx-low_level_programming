#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: the width input
 * @height: the height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);

		if (grid[a] == NULL)
		{
			for (; a >= 0; a--)
				free(grid[a]);

			free(grid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}

	return (grid);
}

