#include "variadic_functions.h"
/**
 * sum_them_all - function that adds all arguments passed
 * @n: amount of variables
 * Return: Sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
