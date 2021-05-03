#include "holberton.h"
/**
 * more_numbers - prints numbers 0-14 10 times
 * @void: null
 */
void more_numbers(void)
{
	int z, x;

	for (x = 0; x < 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
				_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
