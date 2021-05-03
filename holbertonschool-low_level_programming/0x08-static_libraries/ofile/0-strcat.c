#include "holberton.h"
/**
* _strcat - Copys string from dest and puts it in src
* @dest: coping info from
* @src: where informations being copied to
* Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int length, x, z;
	int i, c;

	c = 0;
	for (i = 0; src[i] != '\0'; i++)
		c++;
	
	length = c;
	for (x = length, z = 0; src[z] != '\0'; x++, z++)
		dest[x] = src[z];
	return (dest);
}

