#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(**grid));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		grid[j] = malloc(sizeof(int) * width);

		if (grid[j] == NULL)
		{
			for (j--; j >= 0; j--)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
