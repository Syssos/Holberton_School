#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			sort(&array[min], &array[i]);
			print_array(array, size);
		}
	}

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
