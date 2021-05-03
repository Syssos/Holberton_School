#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char b = 'z';

	for (; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
