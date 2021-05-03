#include "lists.h"
/**
 * add_nodeint - adds node to begging of list
 * @head: node struct
 * @n: number to put in node
 * Return: list_t
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *box;

	if (head == NULL)
		return (NULL);
	box = malloc(sizeof(listint_t));
	if (box == NULL)
		return (NULL);
	box->n = n;
	box->next = *head;
	*head = box;
	return (*head);
}
