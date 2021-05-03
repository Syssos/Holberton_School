#include "lists.h"
/**
 * free_listint2 - function that free listint_t
 * @head: pointer to a pointer
 **/

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (head != NULL && *head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
