#include "holberton.h"
/**
 * _str - counts string lenth
 * @s: string to be counted
 * Return: i
 **/
int _str(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
		c++;
	return (i);
}
/**
* _strcat - Copys string from dest and puts it in src
* @dest: coping info from
* @src: where informations being copied to
* Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int length, x, z;

	length = _str(dest);
	for (x = length, z = 0; src[z] != '\0'; x++, z++)
		dest[x] = src[z];
	return (dest);
}
