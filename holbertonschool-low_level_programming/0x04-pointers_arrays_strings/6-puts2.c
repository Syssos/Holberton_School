#include "holberton.h"
/**
 * puts2 - prints every other string value
 * @str: pointer to the string
 * Return: void
 */
void puts2(char *str)
{
	int l = 0;
	int x;
	int count;
	
	for (x = 0; x <= str[x]; x++)
		count++;
	while (x <= count && '\0')
	{
		_putchar(*(str + l));
		l += 2;
	}
	_putchar('\n');
}
