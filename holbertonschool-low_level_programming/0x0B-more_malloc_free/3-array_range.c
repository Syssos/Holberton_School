#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: creates array of elements
 **/
int *array_range(int min, int max)
{
	int *array;
	int x, z;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (x = min, z = 0; x <= max; x++, z++)
		array[z] = x;
	return (array);
}
