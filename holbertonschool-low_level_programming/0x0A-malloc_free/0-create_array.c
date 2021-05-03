#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - makes an array of chars, and initializes w/ char
 * @size: size of array
 * @c: character initialized in array
 * Return: returns array or null upon failure
**/
char *create_array(unsigned int size, char c)
{
	char *mal;
	unsigned int x;

	if (size > 0)
		mal = malloc(size * sizeof(char));
	if (size == 0 || mal == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		mal[x] = c;
	return (mal);
}
