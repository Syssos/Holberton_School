#include "lists.h"
/**
 * sum_listint - adds up all the data in each node
 * @head: takes in list
 * Return: return sum
 **/
int sum_listint(listint_t *head)
{
	int x = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
