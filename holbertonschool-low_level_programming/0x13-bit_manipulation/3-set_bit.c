#include "holberton.h"
/**
 * set_bit - sets bit and inde to 0, or 1
 * @n: number to change bit in
 * @index: what location to change bit at
 * Return: set bit
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	(*n) |= (1 << index);
	return (1);
}
