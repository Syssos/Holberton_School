#include "holberton.h"
/**
 * leet - transition the text
 * @s: string being passed
 * Return: char
 */
char *leet(char *s)
{
	int  z, x;

	char *letr = "AaeEoOtTlL";
	char *leet = "4433007711";

	for (z = 0; s[z] != '\0'; z++)
	{
		for (x = 0; letr[x] != '\0'; x++)
		{
			if (s[z] == letr[x])
			{
				s[z] = leet[x];
			}
		}
	}
	return (s);
}
