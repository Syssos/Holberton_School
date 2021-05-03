#include "holberton.h"
/**
 * _isalpha - returns 1 if uppercase returns 0 if lowercase
 * @c: tests if value is uppercase
 * Return: 0 or 1
 **/
int _isalpha(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
