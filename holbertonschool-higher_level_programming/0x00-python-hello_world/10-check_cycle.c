#include "lists.h"
/**
 * check_cycle - checks for loop in linked list
 * @list: linked list to test
 * Return: 0 if no cycle 1 if cycle
 **/
int check_cycle(listint_t *list)
{
	listint_t  *first = list;
	listint_t *last = list;

	while (first && last && last->next)
	{
		first = first->next;
		last  = last->next->next;

		if (first == last)
		{
			return (1);
		}
	}
	return (0);
}
