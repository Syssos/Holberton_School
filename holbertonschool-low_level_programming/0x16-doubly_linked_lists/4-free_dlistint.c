#include "lists.h"
/**
 * free_dlistint - free listint_t
 * @head: takes in listint_t *head
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
