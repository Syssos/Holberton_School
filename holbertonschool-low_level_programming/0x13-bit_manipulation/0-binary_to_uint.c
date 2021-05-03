#include "holberton.h"
/**
 * _strlen - return length of string
 * @str: string to get length of
 * Return: length of string
 **/
unsigned int _strlen(const char *str)
{
	unsigned int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}
/**
 * _power - returns 2 to the power of len
 * @len: length of binary string
 * Return: 2 to power of len
 **/
unsigned int _power(unsigned int len)
{
	unsigned int power;
	unsigned int ans = 1;

	power = len;
	while (power > 0)
	{
		ans = ans * 2;
		power -= 1;
	}
	return (ans);
}
/**
 * binary_to_uint - turns binary to int
 * @b: binary string
 * Return: int
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int len;
	unsigned int count = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		count++;
	}
	len = (_strlen(b) - 1);
	count = 0;
	while (b[count] != '\0')
	{
		if (b[count] == '1')
		{
			sum += _power(len);
		}
		len--;
		count++;
	}
	return (sum);
}
