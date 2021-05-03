#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int k;
	char l;

	for (k = 0; k < 10; k++)
	{
		putchar(k % 10 + '0');
	}
	for (l = 'a'; l < 'g'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);

}
