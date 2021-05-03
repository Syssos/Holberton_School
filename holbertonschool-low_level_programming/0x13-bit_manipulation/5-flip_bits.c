#include "holberton.h"
/**
 * flip_bits - # of bits needed to flip bits to another number
 * @n: number to have bits flipped
 * @m: number to switch to
 * Return: number of bits needed to change
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c, count;

	count = 0;
	c = n ^ m;

	while (c > 0)
	{
		if (c & 1)
			count++;
		c = c >> 1;
	}
	return (count);
}
