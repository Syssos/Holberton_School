#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>
#include <stdlib.h>
/* Struct */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* End Struct */
/* Function Prototypes */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
unsigned int list_len(listint_t **list);
void swap_f(listint_t *runner, listint_t **list);
void sort(int *a, int *b);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void q_sort(int arr[], int low, int high, size_t size);
int partition(int arr[], int low, int high, size_t size);
/* End Function Prototypes */
#endif /* HEAD_H */
