#include "holberton.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string being used
 * @accept: accept string
 * Return: count (c)
**/
unsigned int _strspn(char *s, char *accept)
{
	int z, x, c = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[z] == accept[x])
			{
				c++;
				break;
			}
		}
		if (s[z] != accept[x])
			break;
	}
	return (c);
}
