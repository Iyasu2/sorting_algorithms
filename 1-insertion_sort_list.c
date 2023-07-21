#include "sort.h"
/**
 * insertion_sort_list - Entry point
 * Description: 'sorting list using insertion sort algorithm'
 *
 * @list: listint_t input
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
	int count = countnodes(&list)
	if (count < 2 || list == NULL)
		return

	for (i = 0; i < count - 1; i++)
	{
		if (list->prev == NULL)
		{
			list = list->next;
		}

		for (j = 0; j < i; j++)
		{
			if list->n < list->prev->n
			{
				list->prev->next = 
	
}

int countnodes(listint_t **list)
{
	int count = 0;
	listint_t **current = list;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return count
}
