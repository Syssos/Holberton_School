#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: integers to add
 * Return: 0
 */

int main(int argc, char **argv)
{
	int total, x;

	total = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (x = 0; argv[argc][x] != '\0'; x++)
		{


			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[argc]);
	}
	printf("%d\n", total);
	return (0);
}
