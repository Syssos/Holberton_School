#include "lists.h"
/**
 * get_nodeint_at_index - gets node at n index
 * @head: pointer to struct
 * @index: number in the list to get pointer to
 * Return: pointer to node location
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (i > index)
		return (NULL);
	while (i < index)
	{
		if (head != NULL)
		{
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (head);
}
