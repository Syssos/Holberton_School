#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at nth place
 * @h: pointer to start of list
 * @idx: nth value to insert node
 * @n: number to add into node
 * Return: new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new;
	dlistint_t *temp;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (i == idx)
			break;
		temp = temp->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->next = temp->next;
	new->next->prev = new;
	temp->next = new;
	new->prev = temp;
	return (new);
}
