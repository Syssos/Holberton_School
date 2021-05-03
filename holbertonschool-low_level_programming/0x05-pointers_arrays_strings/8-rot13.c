#include "holberton.h"
/**
 * rot13 - rot13
 * @s: string being passed
 * Return: char
 */
char *rot13(char *s)
{
	int z, x;


	char *a = "abcdefghijklmABCDEFGHIJKLM";
	char *rot13 = "nopqrstuvwxyzNOPQRSTUVWXYZ";


	for (z = 0; s[z] != '\0'; z++)
	{
		for (x = 0; x < 26; x++)
		{
			if (s[z] == a[x])
			{
				s[z] = rot13[x];
			}
			else if (s[z] == rot13[x])
			{
				s[z] = a[x];
			}
			else
			{
				s[z] = s[z];
			}
		}
	}
	return (s);
}
