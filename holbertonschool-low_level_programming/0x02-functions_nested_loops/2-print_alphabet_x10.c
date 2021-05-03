#include "holberton.h"
/**
 * print_alphabet_x10 - prints the char string abc...xyz 10 times on a new line
 * @void: no argument
 **/
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int h;
	int x;

	x = 0;
	while (x < 10)
	{
		for (h = 0; h < 26; h++)
			_putchar(alpha[h]);
		_putchar('\n');
		x++;
	}
}
