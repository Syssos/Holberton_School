#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - returns argv[1] * argv[2]
 * @argc: argument counter
 * @argv: string of arguments
 * Return: 0 Success 1 Error
**/
int main(int argc, char *argv[])
{
	int total = 0;

	if (argc - 1 == 2)
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
		return (0);
	}
	printf("Error\n");
	return (1);
}
