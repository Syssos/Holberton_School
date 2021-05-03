#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes "n" to copy from second string
 * Return: pointer to new string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int i, counter = 0, counter2 = 0;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[counter] != '\0')
		counter++;
	while (s2[counter2] != '\0')
		counter2++;
	if (n <= counter2)
	{
		nstr = malloc(sizeof(char) * (counter + n + 1));
	}
	else
	{
		nstr = malloc(sizeof(char) * (counter +  counter2 + 1));
		n = counter2;
	}
	if (nstr == NULL)
		return (NULL);
	for (x = 0; x < counter; x++)
		nstr[x] = s1[x];
	for (i = 0; i < n; x++, i++)
		nstr[x] = s2[i];
	nstr[x] = '\0';
	return (nstr);
}
