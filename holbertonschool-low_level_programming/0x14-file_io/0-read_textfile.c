#include "holberton.h"
/**
 * read_textfile - prints from file
 * @filename: files name to read from
 * @letters: ma amount of needed space
 * Return: size of buf
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int re;
	char *buf;
	ssize_t j; /*read*/

	if (filename == NULL)
		return (0);
	re = open(filename, O_RDONLY);

	if (re == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	j = read(re, buf, letters);
	if (j == -1)
		return (0);
	buf[j] = '\0';
	close(re);
	write(STDOUT_FILENO, buf, j);
	free(buf);
	return (j);
}
