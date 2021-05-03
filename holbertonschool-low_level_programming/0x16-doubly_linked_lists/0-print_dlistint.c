#include "lists.h"
/**
 * print_dlistint - function that prints the elements of a list
 * @h: pointer to constat dlistlist_t
 * Return: size_t
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *track = h;


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
