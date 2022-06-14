#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *ptr1;

	ptr = *list;

	while (ptr != NULL)
	{
		if (ptr->n > ptr->next->n)
		{
			ptr1 = ptr->next;
			ptr1->prev = ptr->prev;
			ptr->next = ptr1->next;
			ptr1->next = ptr;
			ptr->prev = ptr1;
			if (ptr1->prev != NULL)
				ptr1->prev->next = ptr1;
			else
				*list = ptr1;
			if (ptr->next != NULL)
				ptr->next->prev = ptr;
			ptr = *list;
			print_list(*list);
		}
		else
		{
			ptr = ptr->next;
		}
	}
}