#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory from an array using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to the allocated memory, NUll if fails
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < nmemb * size; y++)
		x[y] = 0;
	return (x);
}
