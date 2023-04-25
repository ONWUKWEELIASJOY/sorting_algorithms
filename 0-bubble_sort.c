#include "sort.h"
/**
  * bubble_sort - funcyion for sorting the bubble
  * @array: array to sort.
  * @size: size of array
  * Return: 0
  */

void bubble_sort(int *array, size_t size)
{
	size_t a = 0, b = 0;
	int c = 0;

	if (array == NULL || size == 0)
		return 0;

	for (a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				array[b + 1] = array[b];
				c = array[b + 1];
				array[b] = c;
				print_array(array, size);
			}
		}
	}
}
