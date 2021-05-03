#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - returns integer values from string
 * @s: input string
 * Return: will return integer
 */
int _atoi(char *s)
{
	int z = 0;
	int x = 0;
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '-')
			x++;
		if (s[c] > 47 && s[c] < 58)
		{
			while (s[c] > 47 && s[c] < 58)
				z = z * 10 - (s[c++] - 48);
			break;
		}
	}
	return (z *= x % 2 == 0 ? -1 : 1);
}
