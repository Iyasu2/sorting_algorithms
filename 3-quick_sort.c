#include "sort.h"

/**
 * quick_sort - uses the quick sort algorithm
 *
 * @array: int input
 * @size: size_t input
 * Return: none
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_recur(array, 0, size - 1, size);
}

/**
 * quick_recur - recursive part
 * @array: int input
 * @low: int input
 * @high: int input
 * @size: size_t input
 * Return: none
 */
void quick_recur(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = partition(array, left, right, size);
		quick_recur(array, left, pivot - 1, size);
		quick_recur(array, pivot + 1, right, size);
	}
}

/**
 * partition - gives us a pivot number
 * @array: int input
 * @low: int input
 * @high: int input
 * @size: size_t input
 * Return: pivot number
 */
int partition(int *array, int left, int right, size_t size)
{
	int i = left - 1;
	int j = left;
	int pivot = array[right];
	int temp = 0;

	for(;j < right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[right])
	{
		temp = array[i + 1];
		array[i + 1] = array[right];
		array[right] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
