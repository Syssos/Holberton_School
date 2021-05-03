#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data in dlistint
 * @head: linked list to get sum of data from
 * Return: the sum of the linked list
 **/
int sum_dlistint(dlistint_t *head)
{
	int num = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
