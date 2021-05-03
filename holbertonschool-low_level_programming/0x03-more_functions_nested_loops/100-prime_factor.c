#include <stdio.h>
void prime(long int x);
/**
 * main - entry block
 * @void: null
 * Return: 0 - Succesful
**/
int main(void)
{
	prime(612852475143);
	return (0);
}
/**
 * prime - entry block
 * @x: integer thats being tested.
 * Return: 0 - Succesful
 **/
void prime(long int x)
{
	int z;

	while (x % 2 == 0)
	{
		x = x / 2;
	}
	for (z = 3; z < x; z++)
	{
		if (x % z == 0)
		{
			x = x / z;
		}
		z++;
	}
	printf("%ld\n", x);
}
