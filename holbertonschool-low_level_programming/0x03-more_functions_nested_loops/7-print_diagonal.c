#include "holberton.h"
/**
 * print_diagonal - makes diagonal line n characters long
 * @n: integer representing line length
 */
void print_diagonal(int n)
{
	int z, x;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (z = 0; z <= x; z++)
		{
			if (x == z)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
