#include "holberton.h"
/**
 * print_alphabet - prints the char string abc...xyz and adds a new line
 * @void: null
 **/
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int h;

	for (h = 0; h < 26; h++)
		_putchar(alpha[h]);
	_putchar('\n');
}
