#include "holberton.h"
/**
 * _islower - returns 1 if lowercase returns 0 if uppercase
 * @c: tests if value is lowercase
 * Return: 0 or 1
 **/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
