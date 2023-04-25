#include "sort.h"
#include <stdio.h>

int get_max(int *array, int size);
void counting_sort(int *array, size_t size);

/**
 * get_max - Gets maximum value the array
 * @array: array of integers.
 * @size: size of the array.
 * Return: max interger
 */
int get_max(int *array, int size)
{
	int max, a;

	for (max = array[0], a = 1; a < size; a++)
	{
		if (array[a] > max)
			max = array[a];
	}

	return (max);
}

/**
 * counting_sort - Sorts array of integers in ascending order
 * @array: Array of integers.
 * @size: size of the array
 * contents: Prints oit the array after setting it
 */

void counting_sort(int *array, size_t size)
{
	int *count, *sorted, max, a;

	if (array == NULL || size < 2)
		return;

	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;
	max = get_max(array, size);
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
	{
		free(sorted);
		return;
	}

	for (a = 0; a < (max + 1); a++)
		count[a] = 0;
	for (a = 0; a < (int)size; a++)
		count[array[a]] += 1;
	for (a = 0; a < (max + 1); a++)
		count[a] += count[a - 1];
	print_array(count, max + 1);

	for (a = 0; a < (int)size; a++)
	{
		sorted[count[array[a]] - 1] = array[a];
		count[array[a]] -= 1;
	}

	for (a = 0; a < (int)size; a++)
		array[a] = sorted[a];

        free(count);
	free(sorted);
}
