#include <stdlib.h>
#ifndef __SORT__
#define __SORT__
#include <stdio.h>
#include "sort.h"
/**
 * struct listint_s - Doubly linked list node
*/

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
	
/*printing functions*/

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*sorting algorithms*/

void radix_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
int partition(int *array, int lo, int hi, size_t size);
void quick_s(int *array, int lo, int hi, size_t size);
void merge(size_t lo, size_t mi, size_t hi, int *dest, int *src);
void merge_partition(size_t lo, size_t hi, int *array, int *base);
void swap_root(int *array, size_t root, size_t hi, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
