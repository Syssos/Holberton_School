#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals of 
 * a square matrix of integers
 * @a: integer array
 * @size: matrix size
 **/
void print_diagsums(int *a, int size)
{
	int x, z, c;
	int s1, s2;

	x = 0;
	c = size;
	while (c > 0)
	{
		s1 = s1 + a[x];
		x = x + (size + 1);
		--c;
	}

	z = size - 1;
	s2 = 0;
	c = size;

	while (c > 0)
	{
		s2 = s2 + a[z];
		z = z + (size - 1);
		--c;
	}
	printf("%d, %d\n", s1, s2);
}
