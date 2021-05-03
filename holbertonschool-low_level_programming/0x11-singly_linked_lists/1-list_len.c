#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to constat list_t
 * Return: size_t
 **/
size_t list_len(const list_t *h)
{
	const list_t *list = h;
	size_t count = 0;

	if (list == NULL)
		return (0);
	while (list->next != NULL)
	{
		count++;
		list = list->next;
	}
	if (list->next == NULL)
		count++;
	return (count);
}
