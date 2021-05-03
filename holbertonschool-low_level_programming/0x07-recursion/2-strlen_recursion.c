#include "holberton.h"
/**
 * _strlen_recursion - gets the length of a string
 * @s: string being counted
 * Return: String length, 0 if blank string given
**/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
