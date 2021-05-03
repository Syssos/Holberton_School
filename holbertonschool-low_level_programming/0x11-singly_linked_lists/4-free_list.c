#include "lists.h"
/**
 * free_list - frees memory
 * @head: pointer to type list_t
 **/
void free_list(list_t *head)
{
	list_t *box;

	while (head != NULL)
	{
		box = head;
		head = box->next;
		free(box->str);
		free(box);
	}
}
