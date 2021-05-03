#include "holberton.h"
/**
 * main - copies text from one file to the other
 * @argc: amount of arguments
 * @argv: arguments passed, files to copy
 * Return: 0 if successful
 **/
int main(int argc, char *argv[])
{
	int first, sec, re, wr, cl, llama;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	first = open(argv[1], O_RDONLY);
	if (first == -1)
		return (get_err('f', first, argv[1]));
	sec = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (sec == -1)
		return (get_err('s', sec, argv[2]));
	do {
		re = read(first, buf, 1024);
		if (re == -1)
			return (get_err('r', re, argv[1]));
		wr = write(sec, buf, re);
		if (wr == -1)
			return (get_err('w', wr, argv[2]));
	} while (re == 1024);
	cl = close(first);
	llama = close(sec);
	if (cl == -1)
		return (get_err('c', first, argv[1]));
	if (llama == -1)
		return (get_err('l', sec, argv[2]));
	return (0);
}
/**
 * get_err - gets error code and correct error message
 * @s: help for right code
 * @e: help
 * @filename: for filename printing
 * Return: Error code
 **/
int get_err(char s, int e, char *filename)
{
	if (s == 'c')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", e);
		return (100);
	}
	if (s == 'l')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", e);
		return (100);
	}
	if (s == 'w')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (99);
	}
	if (s == 'r')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (98);
	}
	if (s == 's')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (99);
	}
	if (s == 'f')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (98);
	}
	return (-1);
}
