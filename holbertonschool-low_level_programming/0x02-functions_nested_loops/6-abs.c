#include "holberton.h"
#include <stdlib.h>
/**
* _abs - gives absolute value
* @n: integer given to find absolute value for
* Return: returns n, absolute value
**/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
