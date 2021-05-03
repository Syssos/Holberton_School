#include "holberton.h"

int compare(char *s, char *e)
{
	if (*s == *e)
		return (compare(*s + 1 == *e - 1));
	if (s >= e)
		return (1);
	return (0); 
}

int find_e(char *s)
{
	if (*s != '\0')
		return(find_end(s + 1) + 1);
	return (1);
}

int is_palindrome(char *s)
{
	return(compare(s, (s + find_end(s)) - 1);
}
