#include <stdio.h>
#include "holberton.h"
/**
 * main - This program prints holberton
 * Return: 0 (Success)
 **/
int main(void)
{
	char H[] = "Holberton";

	int c = 0;

	while (c < 9)
	{
		_putchar(H[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
