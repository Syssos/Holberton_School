#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int w;

	for (w = 0; w <= 9; w++)
	{
		putchar(w % 10 + '0');
		if (w < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
