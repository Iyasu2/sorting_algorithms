#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - Entry point
 * Description: 'sorting using bubble sort algorithm'
 *
 * @size: size_t input
 * @array: int input
 * Return: none
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	size_t j;
	int flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				flag++;
			}
		}
		if (flag == 0)
		{
			return;
		}
	}
}
