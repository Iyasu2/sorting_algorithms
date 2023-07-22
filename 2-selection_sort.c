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
	int temp;
	size_t i, j;
	size_t count = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		count = i;
		for (j = i; j < size - 1; j++)
		{
			if (array[count] > array[j + 1])
			{
				count = j + 1;
			}
		}
		if (count != i)
		{
			temp = array[i];
			array[i] = array[count];
			array[count] = temp;
			print_array(array, size);
		}
	}
}
