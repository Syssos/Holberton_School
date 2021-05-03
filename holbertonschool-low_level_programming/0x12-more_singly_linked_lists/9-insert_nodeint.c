#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at nth place
 * @head: pointer to start of list
 * @idx: nth value to insert node
 * @n: number to add into node
 * Return: new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *ptr;
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (*head == NULL)
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
	if (temp == NULL)
		return (NULL);
	ptr = temp->next;
	temp->next = new;
	new->next = ptr;
	return (new);
}
