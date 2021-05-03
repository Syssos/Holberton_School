#include "holberton.h"
/**
 * puts_half - Prints the first part of a string
 * @str: string being input
 */
void puts_half(char *str)
{
	int z, x;

	while (str[z] != '\0')
		z++;
	if (z % 2 == 0)
		x = z / 2;
	else
		x = (z + 1) / 2;
	while (x < z)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
