#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string being printed.
 * Return: null
 */
void print_rev(char *s)
{
	char *zx = s;


	while (*zx != '\0')
		zx++;
	zx--;
	while (zx >= s)
	{
		_putchar(*zx);
		zx--;
	}
	_putchar('\n');
}
