#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copies a string
 * @dest: destionation of string
 * @src: source of string
 * Return: return the destination string
 **/
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = src[x];
	return (dest);
}
/**
 * _strl - returns the length of a string
 * @s: takes in a string
 * Return: i, string length
 **/
int _strl(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
/**
 * new_dog - function will create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a copy of name and owner of new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	new_name = malloc(sizeof(char) * _strl(name) + 1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(new_name, name);
	new_owner = malloc(sizeof(char) * _strl(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	_strcpy(new_owner, owner);
	d->name = new_name;
	d->age = age;
	d->owner = new_owner;
	return (d);
}
