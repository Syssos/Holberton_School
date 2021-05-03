#include "holberton.h"
/**
 * get_bit - gets bit at given index
 * @n: number to seach through
 * @index: Location to get bit
 * Return: bit at location
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
