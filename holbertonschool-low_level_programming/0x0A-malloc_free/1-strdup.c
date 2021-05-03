#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _size - finds length of string
 * @s: string to find length of
 * Return: string length
**/
int _size(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
/**
 * _strdup - returns a pointer to space in memory w/ str copy
 * @str: string to copy to space in memory
 * Return: pointer to new space in memory
**/
char *_strdup(char *str)
{
	char *str_s;
	unsigned int z;

	if (str == NULL)
		return (NULL);
	str_s = malloc((_size(str) + 1) * sizeof(char));
	if (str_s == NULL)
		return (NULL);
	for (z = 0; str[z] != '\0'; z++)
		str_s[z] = str[z];
	return (str_s);
}
