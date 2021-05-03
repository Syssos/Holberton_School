#include "lists.h"
/**
 * _strlen - string length function
 * @str: string to find length
 * Return: string length
 **/
int _strlen(const char *str)
{
	int x;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * add_node_end - adds node to the end of list
 * @head: node struct
 * @str: string to put in node
 * Return: list_t
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	if (*head != NULL)
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
		newnode->next = NULL;
	}
	else
	{
		*head = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
