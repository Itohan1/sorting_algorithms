#include "sort.h"


/**
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, k = size - 1;
	int temp, flag;

	while (i < k)
	{
		size_t j = 0;
		flag = 0;

		while (j < k - i)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;

				print_array(array, size);
			}
			j++;
		}
		if (flag == 0)
		{
			break;
		}
		i++;
	}
}
