#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int w;

	for (w = 0; w <= 99; w++)
	{
		putchar(w / 10 % 10 + '0');
		putchar(w % 10 + '0');
		if (w < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
