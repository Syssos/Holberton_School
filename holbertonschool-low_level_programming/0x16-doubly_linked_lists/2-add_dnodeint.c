#include "lists.h"
/**
 * add_dnodeint - adds node to begging of list
 * @head: node struct
 * @n: number to put in node
 * Return: dlistint_t
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *box;

	if (head == NULL)
		return (NULL);
	box = malloc(sizeof(dlistint_t));
	if (box == NULL)
		return (NULL);
	box->n = n;
	box->next = *head;

	if (*head != NULL)
		(*head)->prev = box;

	*head = box;
	return (*head);
}
