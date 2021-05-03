#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: returns a pointer to allocated memory
**/
void *malloc_checked(unsigned int b)
{
	void *number;

	number = malloc(b);
	if (number == NULL)
		exit(98);
	return (number);
}
