#include "holberton.h"
/**
 * get_endianness - checks direction computers read
 * Return: tells if big or little
 **/
int get_endianness(void)
{
	unsigned long int x = 1;
	char *c;

	c = (char *) &x;
	return ((int) *c);
}
