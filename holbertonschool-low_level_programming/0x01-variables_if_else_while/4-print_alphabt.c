#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char b = 'a';

	for (; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
			putchar(b);
	}
	putchar('\n');
	return (0);
}
