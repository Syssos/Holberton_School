#include "holberton.h"
/**
 * clear_bit - clears bit at index
 * @n: number to serch through
 * @index: location to clear bit
 * Return: number with index cleared
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	(*n) &= ~(1 << index);
	return (1);
}
