#include "holberton.h"
/**
 * _sqrt_recursion - function to return natural square root
 * @n: integer
 * Return: integer
 **/
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 * help - helper function to find sqare root
 * @n: integer
 * @x: integer
 * Return: integer
 **/
int help(int n, int  x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (help(n, x = x + 1));
}
