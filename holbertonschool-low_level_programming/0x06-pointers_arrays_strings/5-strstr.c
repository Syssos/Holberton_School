#include <stdio.h>
#include "holberton.h"
/**
 * _strstr - locates substring
 * @haystack: String being searched
 * @needle: whats being searched for
 * Return: Null if nothing found
 **/
char *_strstr(char *haystack, char *needle)
{
	int z, x, c;

	for (z = 0; haystack[z] != '\0'; z++)
	{
		for (c = z, x = 0; needle[x] != '\0'; x++, c++)
		{
			if (needle[x] != haystack[c]  || haystack[c] == '\0')
				break;
		}
		if (needle[x] == '\0')
			return (haystack + z);
	}
	return (NULL);
}
