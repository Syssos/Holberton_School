#include "holberton.h"
/**
 * print_triangle -makes a triangle
 * @size: integer for how big the triangle will be
 **/
void print_triangle(int size)
{
	int r, c, x;

	if (size <= 0)
		_putchar('\n');
	for (r = 0; r < size; r++)
	{
		for (c = size - r; c > 1; c--)
			_putchar(' ');
		for (x = r + c; x >= 1; x--)
			_putchar('#');
		_putchar('\n');
	}
}
