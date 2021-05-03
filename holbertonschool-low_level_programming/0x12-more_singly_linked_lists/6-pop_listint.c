#include "lists.h"
/**
 * pop_listint - removes head and returns data in head
 * @head: pointer to pointer
 * Return: return x
 **/
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = (*head)->next;
		x = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (x);
}
