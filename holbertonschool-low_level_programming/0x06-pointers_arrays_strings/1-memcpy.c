#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: where infos going
 * @src: where infos coming from
 * @n: how many bytes to copy
 * Return: dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
