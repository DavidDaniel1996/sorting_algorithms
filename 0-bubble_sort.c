#include "sort.h"

/**
 * bubble_sort - sorts array in ascending order, prints for every sort
 *
 * @array: array to sort
 * @size: size of the arrya
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, store;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				store = array[j + 1];
				array[j + 1] = array[j];
				array[j] = store;
				print_array(array, size);
			}
			j++;
		}
		i++;
		j = 0;
	}
}
