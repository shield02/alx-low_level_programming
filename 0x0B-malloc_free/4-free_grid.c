#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 diemensional grid
 * @grid: int variable
 * @height: int variable
 *
 * Description: This function frees a 2 dimensional grid previously
 * created by alloc_grid function
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
