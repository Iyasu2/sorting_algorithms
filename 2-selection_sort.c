#include "sort.h"
/**
 * selection_sort - Entry point
 * Description: 'sorting list using selection sort algorithm'
 *
 * @array: int input
 * @size: size_t input
 * Return: none
 */
void selection_sort(int *array, size_t size)
{
	int temp1, temp2;
	size_t i, j;
	size_t count = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			if (j == i)
				temp1 = array[i];
			if (temp1 > array[j + 1])
			{
				temp1 = array[j + 1];
				count = j;
			}
		}
		temp2 = array[i];
		array[i] = temp1;
		array[count + 1] = temp2;
		print_array(array, size);
	}
}
