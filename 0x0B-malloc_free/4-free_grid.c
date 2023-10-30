#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Short description, single line
 * @grid: param1
 * @height: param2
 *
 * Description: Description
 *
 * Return: Return
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}

