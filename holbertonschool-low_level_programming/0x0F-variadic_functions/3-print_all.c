
#include "variadic_functions.h"
/**
 * print_c - print char
 * @str: string pointer
 * @list: va_list
 **/
void print_c(char *str, va_list list)
{
	printf("%s%c", str, va_arg(list, int));
}
/**
 * print_i - print int
 * @str: string pointer
 * @list: va_list
 **/
void print_i(char *str, va_list list)
{
	printf("%s%d", str, va_arg(list, int));
}
/**
 * print_f - print float
 * @str: string pointer
 * @list: va_list
 **/
void print_f(char *str, va_list list)
{
	printf("%s%f", str, va_arg(list, double));
}
/**
 * print_s - print a string
 * @str: string pointer
 * @list: va_list
 **/
void print_s(char *str, va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", str, s);
}
/**
 * print_all - prints everything
 * @format: takes in a format
 **/
void print_all(const char * const format, ...)
{
	va_list list;

	int i = 0;
	int x = 0;

	char *str;

	stru key[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(list, format);

	str = "";
	while (format != NULL && format[i] != '\0')
	{
		x = 0;
		while (key[x].c != NULL)
		{
			if (format[i] == key[x].c[0])
			{
				key[x].f(str, list);
				str = ", ";
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
