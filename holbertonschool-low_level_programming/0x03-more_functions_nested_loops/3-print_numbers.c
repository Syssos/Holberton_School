#include "holberton.h"
/**
 * print_numbers - prints most numbers 0-9
 * @void: null
 * Return: nothing
 **/

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
