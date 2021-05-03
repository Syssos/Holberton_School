#include "holberton.h"
/**
 * char *_strncat - combines two strings
 * @dest: destination string
 * @src: source string
 * @n: max src byte size
 * Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, z;


	while (dest[x] != '\0')
		x++;
	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[x + z] = src[z];
	return (dest);
}
