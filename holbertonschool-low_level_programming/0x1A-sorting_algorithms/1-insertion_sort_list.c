#include "sort.h"


/**
 * insertion_sort_list - sorts doubly linked list using instertion sorting
 * @list: takes double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *runner;

	if (list == NULL || (*list)->next == NULL || *list == NULL)
		return;

	runner = *list;
	while (runner->next != NULL)
	{
		runner = runner->next;
		if (runner->n < runner->prev->n)
			swap_f(runner, &(*list));
	}
}
/**
 * swap_f - swaps 2 nodes
 * @r: current node's location
 * @list: double linked list "r" is from
 */
void swap_f(listint_t *r, listint_t **list)
{
	listint_t *runner, *last;

	runner = r;

	while (1)
	{
		if (runner->prev == NULL || runner->n > runner->prev->n)
			break;
		last = runner->prev;
		if (runner->next != NULL)
			runner->next->prev = last;
		last->next = runner->next;
		if (last->prev != NULL)
			last->prev->next = runner;
		runner->prev = last->prev;
		last->prev = runner;
		runner->next = last;
		if (runner->prev == NULL)
			*list = runner;
		print_list(*list);
	}
}
