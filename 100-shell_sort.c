#include "sort.h"

/**
 * shell_sort - sorts using Shell sort algorithm, using the Knuth sequence
 *
 * @array: int input
 * @size: size_t input
 */
void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i, j;
    int temp;

    if (array == NULL || size < 2)
        return;

    while (gap < size / 3)
        gap = gap * 3 + 1;

    while (gap > 0)
    {
        for (i = gap; i < size; i++)
        {
            temp = array[i];
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
                array[j] = array[j - gap];
            array[j] = temp;
        }
        print_array(array, size);
        gap /= 3;
    }
}

