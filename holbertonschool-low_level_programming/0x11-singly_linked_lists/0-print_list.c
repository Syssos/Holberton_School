#include "lists.h"
/**
 * print_list - function that prints the elements of a list
 * @h: pointer to constat list_t
 * Return: size_t
 **/
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *track = h;


	if (track == NULL)
		return (0);
	while (track != NULL)
	{
		if (track->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", track->len, track->str);
		track = track->next;
		counter++;
	}
	return (counter);
}
