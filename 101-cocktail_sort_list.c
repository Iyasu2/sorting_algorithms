#include "sort.h"

/**
 * cocktail_sort_list - sorts using the Cocktail shaker sort algorithm
 *
 * @list: listint_t input
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *start = NULL, *end = NULL, *temp = NULL;
	int swapped = 0;

	if (!list || !*list || !(*list)->next)
		return;

	start = *list;
	end = NULL;

	do
	{
		swapped = 0;
		while (start->next != end)
		{
			if (start->n > start->next->n)
			{
				temp = start->next;
				if (start->prev)
					start->prev->next = temp;
				else
					*list = temp;
				temp->prev = start->prev;
				start->next = temp->next;
				if (temp->next)
					temp->next->prev = start;
				start->prev = temp;
				temp->next = start;
				print_list(*list);
				swapped = 1;
			}
			else
				start = start->next;
		}
		end = start;
		while (end->prev != NULL)
		{
			if (end->n < end->prev->n)
			{
				temp = end->prev;
				if (temp->prev != NULL)
					temp->prev->next = end;
				else
					*list = end;
				end->prev = temp->prev;
				temp->next = end->next;
				if (end->next != NULL)
					end->next->prev = temp;
				end->next = temp;
				temp->prev = end;
				print_list(*list);
				swapped = 1;
			}
			else
				end = end->prev;
		}
	}
	while (swapped);
}
