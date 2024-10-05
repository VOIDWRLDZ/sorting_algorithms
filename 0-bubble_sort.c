#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort
 * @array: Pointer to the array of integers to sort
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, n;
    int temp;
    int swapped;  /* Use int instead of bool */

    if (!array || size < 2)
        return;

    n = size;
    while (n > 1)
    {
        swapped = 0;  /* Set swapped to 0 (false) */
        for (i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;  /* Set swapped to 1 (true) */
                print_array(array, size);  /* Print array after each swap */
            }
        }
        n--;  /* Reduce n as the largest element is now sorted at the end */
        if (!swapped)  /* If no elements were swapped, array is sorted */
            break;
    }
}
