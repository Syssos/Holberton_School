#include "variadic_functions.h"
/**
 * print_strings - prints strings passed as arguments
 * @separator: what separates the strings
 * @n: amount of strings
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	str = va_arg(list, char *);

	for (i = 0; i < n - 1; i++)
	{
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL)
			printf("%s", separator);
		str = va_arg(list, char *);
	}
	if (i == n - 1)
	{
		printf("%s\n", str);
	}
	va_end(list);
}
