#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _size - gets string length
 * @s: string to find length
 * Return: string length
**/
int _size(char *s)
{
	int t = 0;

	while (s[t] != '\0')
		t++;
	return (t);
}
/**
 * str_concat - concats two strings
 * @s1: first string
 * @s2: Second string
 * Return: concated strings
**/
char *str_concat(char *s1, char *s2)
{
	char *str, *blank;
	int x, y;
	int str_x = 0;
	int str_y = 0;

	blank = "";
	if (s1 == NULL)
		s1 = blank;
	if (s2 == NULL)
		s2 = blank;
	str_x = _size(s1);
	str_y = _size(s2);
	str = malloc((str_x * sizeof(char)) + (str_y * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++, x++)
		str[x] = s2[y];
	str[x] = '\0';
	return (str);
}
