#include "lists.h"
/**
 * free_listint - free listint_t
 * @head: takes in listint_t *head
**/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
