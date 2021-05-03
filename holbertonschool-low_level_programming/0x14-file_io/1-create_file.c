#include "holberton.h"
/**
 * create_file - Creates file and writes to it
 * @filename: name of file to write into
 * @text_content: content to go into file
 * Return: 1 upon success
 **/
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (op == -1)
		return (-1);
	if (text_content == '\0')
		text_content = "";
	wr = write(op, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(op);
	return (1);
}
/**
 * _strlen - gets string length
 * @str: string
 * Return: legnth of string
 **/
int _strlen(char *str)
{
	int f = 0;

	while (str[f] != '\0')
		f++;
	return (f);
}
