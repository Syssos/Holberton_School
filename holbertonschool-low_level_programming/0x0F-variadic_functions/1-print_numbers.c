#include "variadic_functions.h"
/**
 * print_numbers - prints numbers passed to function
 * @separator: separates numbers
 * @n: number of arguments
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, p = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(list, int);
		if (separator == NULL)
			printf("%d", p);
		else
		{
			if (i == 0)
				printf("%d", p);
			else
			{
				printf("%s%d", separator, p);
			}
		}
	}
	if (i == n)
		printf("\n");
	va_end(list);
}
