#include "holberton.h"
/**
 * jack_bauer - shows time from 00:00 to 23:59
 * @void: null
 */
void jack_bauer(void)
{
	int x, z;

	for (x = 0; x < 24; x++)
	{
		for (z = 0; z < 60; z++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
			_putchar('\n');
		}
	}
}
