#include "search_algos.h"
/**
 * binary_search_helper - recursively checks array until value is found
 * @array: pointer to the first element in the array
 * @left: the left side of the array
 * @right: the right side of the array
 * @value: the value to search for
 * Return: the index of the value in the array, or -1 if none
 */

int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	size_t middle;
	size_t index;

	if (!(left >= right))
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		middle = left + ((right - left) / 2);

		if (array[middle] == value)
			return (middle);

		else if (array[middle] < value)
			return (binary_search_helper(array, middle + 1, right, value));

			else if (array[middle] > value)
				return (binary_search_helper(array, left, middle - 1, value));
	}
	return (-1);
}

/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index of the value in the array, or -1 if none
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_helper(array, 0, size - 1, value));
}
