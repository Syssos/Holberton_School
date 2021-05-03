#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @x: this is the number the last digit is being taken from
* Return: z, which will be the last digit
**/
int print_last_digit(int x)
{
	int z;

	z = x % 10;

	if (z < 0)
	{
		z = z * -1;
	}
	_putchar(z + '0');
	return (z);
}
