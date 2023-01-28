#include "sort.h"
/**
 * selection_sort - sort array via selection sort
 * @array: array to be sorted
 * @size: size of an array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, temp;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[k])
				k = j;

		temp = array[i];
		array[i] = array[k];
		array[k] = temp;

	if (i != k)
		print_array(array, size);

	}
}
