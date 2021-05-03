#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - function that performs simple operations
 * @s: takes in a operator in string
 * Return: function pointer
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0;

	while (ops[x].op != NULL)
	{
		if (strcmp(ops[x].op, s) == 0)
		{
			return (ops[x].f);
		}
		x++;
	}
	printf("Error\n");
	exit(99);
}
