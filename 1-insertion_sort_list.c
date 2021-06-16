#include "sort.h"
/**
 * insertion_sort_list - Function that ordered doubly linked list,
 * that oredered acsending
 * @list: Paremeter doubly linked lict
 * Return - None
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *forward = NULL, *backward = NULL,
				*a = NULL, *b = NULL, *c = NULL, *d = NULL;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	forward = *list;
	while (forward != NULL)
	{
		backward = forward;
		while (backward != NULL
				&& backward->prev != NULL && backward->prev->n > backward->n)
		{
			a = backward->prev->prev;
			b = backward->prev;
			c = backward;
			d = backward->next;

			if (a)
				a->next = c;
			c->next = b;
			b->next = d;

			if (d)
				d->prev = b;
			b->prev = c;
			c->prev = a;
			if (*list == b)
				*list = c;
			print_list(*list);
		}
		forward = forward->next;
	}
}
