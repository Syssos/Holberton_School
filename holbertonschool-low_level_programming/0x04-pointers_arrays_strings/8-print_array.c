#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array elements
 * @a: takes array
 * @n: # of elements
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		if (w < n - 1)
		{
			printf("%d, ", a[w]);
		}
		else
		{
			printf("%d", a[w]);
		}
	}
	printf("\n");
}
