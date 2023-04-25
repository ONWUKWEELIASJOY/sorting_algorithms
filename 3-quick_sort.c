#include "sort.h"

void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);

/**
 * lomuto_sort - usese quicksort algorithm through recursion.
 * @array: array of integers
 * @size: size of  array
 * @left: left index of the array
 * @right: right index of the array
 *
 * contents: Uses the Lomuto.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - quicksort an array of integers in ascending
 * @array: array of integers.
 * @size: size of array.
 *
 * Content: Uses the Lomuto function
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}

/**
 * swap_ints - Swaps 2 integers in an array.
 * @a: first integer to swap.
 * @b: second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Order an array of integers
 * @array: array of integers.
 * @size: size of the array.
 * @left: starting idex
 * @right: ending index 
 *
 * Return: final index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, up, down;

	pivot = array + right;
	for (up = down = left; down < right; down++)
	{
		if (array[down] < *pivot)
		{
			if (up < down)
			{
				swap_ints(array + down, array + up);
				print_array(array, size);
			}
			up++;
		}
	}

	if (array[up] > *pivot)
	{
		swap_ints(array + up, pivot);
		print_array(array, size);
	}

	return (up);
}
