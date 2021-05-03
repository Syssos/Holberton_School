#include "holberton.h"
/**
 * print_sign - returns + if posotive
 * returns 0 if 0
 * returns - if negative
 * @n: tests if value is positive, negative, or 0
 * Return: 0, 1, or -1 depending on weither the outcome is +, _, or 0
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
