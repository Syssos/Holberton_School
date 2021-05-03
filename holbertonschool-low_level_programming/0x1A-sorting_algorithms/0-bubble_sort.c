#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int flag;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		flag = 1;
		for (j = 0; j < (size - i) - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				sort(&array[j], &array[j + 1]);
				flag = 0;
				print_array(array, size);
			}
		}
		/*Check if any two elements were sorted*/
		if (flag == 1)
			break;
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
