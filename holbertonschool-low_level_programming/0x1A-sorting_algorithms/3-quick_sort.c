#include "sort.h"
/**
 * quick_sort - sorts array using quicksort
 * @array: array to sort
 * @size: size of the array
 **/
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (size < 2 || array == NULL)
		return;
	q_sort(array, low, high, size);
}
/**
 * q_sort - recurcive function to quick sort array
 * @arr: array to sort
 * @low: start of array
 * @high: end of array
 * @size: size of array
 **/
void q_sort(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		q_sort(arr, low, pi - 1, size);
		q_sort(arr, pi + 1, high, size);
	}
}
/**
 * partition - partitions array
 * @arr: array to sort
 * @low: start of array
 * @high: end of array
 * @size: size of array
 * Return: partitioned index
**/
int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j = low;

	while (j < high)
	{
		if (arr[j] < pivot)
		{
			i++;
			if (i != j)
			{
				sort(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
		j++;
	}
	if (pivot < arr[i + 1])
	{
		sort(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}
/**
 * sort - swaps the int values during the bubble sort
 * @a: integer
 * @b: integer
 */
void sort(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
