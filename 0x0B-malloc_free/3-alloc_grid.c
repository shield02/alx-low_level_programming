#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: int variable
 * @height: int variable
 *
 * Description: This function returns a pointer to a 2
 * dimensional array of integers
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
