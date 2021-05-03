#include "lists.h"
/**
 * is_palindrome - checks if singly linked list is palindrom
 * @head: start of linked list
 * Return: 0 if fail, 1 upon success
 **/
int is_palindrome(listint_t **head)
{
	int ar[10000];
	listint_t *runner;
	int length = 0;
	int i, j;

	if (*head == NULL)
		return(1);
        runner = *head;
	while (runner != NULL)
	{
		length++;
		runner = runner->next;
	}
	if (length == 1)
		return(1);
	runner = *head;
	while (runner != NULL)
	{
		ar[i] = runner->n;
		i++;
		runner = runner->next;
	}
	i--;
	j = 0;
	length--;
	while (i >= length / 2)
	{
		if (ar[j] != ar[i])
			return (0);
		j++;
		i--;
	}
	return (1);
}
