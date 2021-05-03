#include "holberton.h"
/**
 * _isupper - This function desides if "c" is uppercase or lowercase
 * @c: null
 * Return: 1 if positive 0 if negative
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
