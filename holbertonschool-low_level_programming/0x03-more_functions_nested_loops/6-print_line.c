#include "holberton.h"
/**
 * print_line - function that prints a straight line
 * @n: integer representing number of times '_' is printed
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
