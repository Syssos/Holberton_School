#include"3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds integers
 * @a: integer to add
 * @b: integer to add
 * Return: Result
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts integers
 * @a: integer
 * @b: integer
 * Return: Result
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies integers
 * @a: integer
 * @b: integer
 * Return: Result
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides integers
 * @a: integer
 * @b: integer
 * Return: Result
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds remainder of two integers
 * @a: integer
 * @b: integer
 * Return: Result
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
