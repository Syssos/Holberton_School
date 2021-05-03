#include "holberton.h"
/**
 * *_strncpy - Copies a string
 * @dest: copied string destination
 * @src: string to be copied
 * @n: limit
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (src[x] && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
