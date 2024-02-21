#include "sort.h"

/**
 * selection_sort - sort algorithm
 * @array: integer pointer
 * @size: variable
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int temp;

	if (array == NULL)
	{
		return;
	}

	while (array && i < size - 1)
	{
		size_t Min = i;
		size_t j = i + 1;

		while (j < size)
		{
			if (array[j] < array[Min])
			{
				Min = j;
			}
			j++;
		}
		if (Min != i)
		{
			temp = array[i];
			array[i] = array[Min];
			array[Min] = temp;
			print_array(array, size);
		}
		i++;
	}
}
