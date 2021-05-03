#include <stdio.h>
#include "holberton.h"
/**
 * main - prints name of program
 * @argc: counter
 * @argv: string
 * Return: 0 SUCCESS
**/
int main(int argc, char *argv[])
{
	if (argc <= 1)
		printf("%s\n", argv[0]);

	return (0);
}
