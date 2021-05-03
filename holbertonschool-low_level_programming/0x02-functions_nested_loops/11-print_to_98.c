#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: is an integer
 * Return: null
 */
void print_to_98(int n)
{
	int z;

	if (n > 98)
	{
		for (z = n; z > 97; z--)
		{
			printf("%d", z);
			if (z != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (z = n; z < 99; z++)
		{
			printf("%d", z);
			if (z != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
