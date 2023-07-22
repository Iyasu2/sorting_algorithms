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
	listint_t *new_node = NULL;
	listint_t *temp = NULL;
	int count = countnodes(list);

	if (count < 2 || list == NULL || *list == NULL)
		return;

	new_node = *list;
	new_node = new_node->next;
	while (new_node)
	{
		while (new_node->prev && new_node->n < (new_node->prev)->n)
		{
			temp = new_node;
			if (new_node->next)
			{
				(new_node->next)->prev = temp->prev;
			}
			(new_node->prev)->next = temp->next;
			new_node = new_node->prev;
			temp->prev = new_node->prev;
			temp->next = new_node;
			if (new_node->prev)
				(new_node->prev)->next = temp;
			new_node->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			new_node = new_node->prev;
		}
		new_node = new_node->next;
	}

}

/**
 * countnodes - Entry point
 * Description: 'counting the number of nodes in a list'
 *
 * @list: listint_t input
 * Return: int
 */
int countnodes(listint_t **list)
{
	int count = 0;
	listint_t *current = *list;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
