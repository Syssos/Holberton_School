#include "lists.h"
/**
 * print_listint - function that prints the elements of a list
 * @h: pointer to constat list_t
 * Return: size_t
 **/
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *track = h;


	if (track == NULL)
		return (0);
	while (track != NULL)
	{
		printf("%d\n", track->n);
		track = track->next;
		counter++;
	}
	return (counter);
}
