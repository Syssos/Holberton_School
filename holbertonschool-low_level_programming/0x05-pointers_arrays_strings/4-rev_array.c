#include "holberton.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array being reversed
 * @n: number of elements of inside array
 */
void reverse_array(int *a, int n)
{
	int z, x, y;

	for (z = 0, y = (n - 1); z < y; z++, y--)
	{
		x = a[z];
		a[z] = a[y];
		a[y] = x;
	}
}
