#include "holberton.h"

/**
 * times_table - makes a times table up to 9
 * @void: null
 * Return: no return
 */
void times_table(void)
{
	int z, x, f, h;

	z = 0;
	while (z < 10)
	{
		_putchar('0');
		x = 1;
		while (x < 10)
		{
			_putchar(',');
			_putchar(' ');
			f = z * x, h = f / 10;
			if (f < 10)
			{
				_putchar(' ');
				_putchar(f + '0');
			}
			else
			{
				_putchar(h + '0');
				_putchar(f % 10 + '0');
			}
			x++;
		}
		_putchar('\n');
		z++;
	}
}
