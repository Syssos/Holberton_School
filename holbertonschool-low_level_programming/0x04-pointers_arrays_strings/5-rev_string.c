#include "holberton.h"
/**
 * rev_string - reverses string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int c, n;
	char f, l;

	n = 0;
	c = 0;
	while (s[n] != '\0')
		n++;
	n--;
	while (c < n)
	{
		f = s[c];
		l = s[n];
		s[c++] = l;
		s[n--] = f;
	}
}
