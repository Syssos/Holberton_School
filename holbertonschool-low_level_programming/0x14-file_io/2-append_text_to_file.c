#include "holberton.h"
/**
 * append_text_to_file - appends text content to file
 * @filename: file to append to
 * @text_content: text to append to
 * Return: Negative 1 if fail
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);
	if (text_content == '\0')
		return (1);
	wr = write(op, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(op);
	return (1);
}
/**
 * _strlen - gets string length
 * @str: string to get length of
 * Return: return string legnth
 **/
int _strlen(char *str)
{
	int f = 0;

	while (str[f] != '\0')
		f++;
	return (f);
}
