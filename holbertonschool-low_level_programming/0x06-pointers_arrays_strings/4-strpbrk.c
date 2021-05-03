#include <stdio.h>
#include "holberton.h"
/**
 * _strpbrk - searchs a string for any set of bytes
 * @s: string being used
 * @accept: string to compare
 * Return: Null
**/
char *_strpbrk(char *s, char *accept)
{
	int x, z;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
				return (s + x);
		}
	}
	return (NULL);
}
