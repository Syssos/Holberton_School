#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar(k % 10 + '0');
		k++;
	}
	putchar('\n');
	return (0);
}
