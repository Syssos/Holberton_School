#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - searches for the frist accurance of "c"
 * @s: string being given
 * @c: Character serched for
 * Return: "s" when character found, NULL if nothing found
**/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
		s++;
	}
	return (NULL);
}
