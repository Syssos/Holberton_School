#include "lists.h"
/**
 * _strl - string length function
 * @str: string to find length
 * Return: string length
 **/
int _strl(const char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}
/**
 * add_node - adds node to begging of list
 * @head: node struct
 * @str: string to put in node
 * Return: list_t
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *box;

	box = malloc(sizeof(list_t));
	if (box == NULL)
		return (NULL);
	box->str = strdup(str);
	if (box->str == NULL)
	{
		free(box);
		return (NULL);
	}
	box->len = _strl(str);
	box->next = *head;
	*head = box;
	return (box);
}
