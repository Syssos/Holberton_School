#include <stdio.h>
/**
 * main - prints only unique numbers from 00-100
 *
 * return (0) = SUCESS
 **/
int main(void)
{
	int a;
	int b;
	
	for(a = '0'; a < '10'; a++)
		for(b = '0'; b < '10'; b++)
		{
			if(!(a <= b))
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');
	return (0);
}
