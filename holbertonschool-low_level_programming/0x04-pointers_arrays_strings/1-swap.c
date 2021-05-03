#include "holberton.h"
/**
* swap_int - Swaps information at pointers
* @a: pointer to swap
* @b: pointer to swap
* Return: void
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
