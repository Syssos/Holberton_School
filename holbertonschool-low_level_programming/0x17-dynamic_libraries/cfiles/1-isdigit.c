#include "holberton.h"
/**
 * _isdigit - This function desides if "c" is a digit 0-9 or not
 * @c: integer being tested
 * Return: 1 if digit 0 if not digit
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
