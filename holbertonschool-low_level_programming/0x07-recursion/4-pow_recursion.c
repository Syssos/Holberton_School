#include "holberton.h"
/**
 * _pow_recursion - calculates x to the yth power
 * @x: integer x
 * @y: integer y
 * Return: x to the power of y
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
