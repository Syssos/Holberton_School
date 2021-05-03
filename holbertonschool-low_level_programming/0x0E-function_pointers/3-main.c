#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - initial entry
 * @argc: takes in arguments
 * @argv: number of args
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int out;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	out = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", out);
	return (0);
}
