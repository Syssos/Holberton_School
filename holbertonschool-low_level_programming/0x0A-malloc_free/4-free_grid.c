#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free's grid space
 * @grid: takes grid from #3
 * @height: takes in height
 **/
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	else
	{
		for (x = 0; x < height; x++)
			free(grid[x]);
		free(grid);
	}
}
