#include "holberton.h"
/**
 * cap_string - capitalizes all words
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int x = 1;
	char z;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	while (str[x] != '\0')
	{
		z = str[x - 1];
		if ((z == ' ' || z == '\t' || z == '\n' || z == ',' || z == ';' || z == '.'
		     || z == '!' || z == '?' || z == '"' || z == '(' || z == ')'
		     || z == '{' || z == '}') && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;

		}

		++x;
	}
	return (str);
}
