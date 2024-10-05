#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using Bubble Sort
 * @array: The array to be sorted
 * @size: The number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (n = size; n > 1; n--)
	{
		swapped = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				/* Swap elements */
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				/* Print the array after each swap */
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
