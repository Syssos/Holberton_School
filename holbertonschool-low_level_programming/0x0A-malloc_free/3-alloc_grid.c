#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - allocates a grid
 * @width: width of grid
 * @height: height of grid
 * Return: grid with free spaces
**/
int **alloc_grid(int width, int height)
{
	int **box;


	int x, y;


	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	box = malloc(sizeof(int *) * height);
	if (box == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		box[x] = malloc(sizeof(int) * width);
		if (box[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
				free(box[x]);
			free(box);
			return (NULL);
		}
	}
	for (x = 0; y < width; y++)
		box[x][y] = 0;
	return (box);
}
