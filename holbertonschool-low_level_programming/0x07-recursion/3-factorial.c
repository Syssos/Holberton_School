#include "holberton.h"
/**
 * factorial - returns factorial of a number
 * @n: integer to find factor
 * Return: factorial or -1 if input - or 0
**/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
