#include "sort.h"

/**
 * insertion_sort_list - function that sort out doubly linked list of integers
 * @list: pointer of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			print_list((const listint_t *)*list);
		}
	}
}
