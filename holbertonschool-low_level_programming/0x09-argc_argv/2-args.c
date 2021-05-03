#include <stdio.h>
#include "holberton.h"
/**
 * main - prints all arguments
 * @argc: counter
 * @argv: string of arguments
 * Return: 0 Success
**/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
