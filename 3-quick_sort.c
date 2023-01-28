#include "sort.h"
/**
 * swap - swap 2 elements
 * @array: arrray
 * @number1: first number
 * @number2: second number
 * @size: array size
 */
void swap(int *array, int *number1, int *number2, size_t size)
{
	int temp = *number1;
	*number1 = *number2;
	*number2 = temp;
	print_array(array, size);
}
/**
 * partition - partition an array
 * @array: array
 * @start: startuing point of an array
 * @end: end point of an array
 * @size: array size
 * Return: an integer
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int index = start;
	int i;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (index != i)
			{
				swap(array, &array[i], &array[index], size);
			}
			index++;
		}
	}
	if (index != end)
		swap(array, &array[end], &array[index], size);
	return (index);
}
/**
 * quickSort - temp sort the array
 * @array: array
 * @low: lowest integer
 * @high: highest integer
 * @size: array size
 */
void quickSort(int *array, int low, int high, size_t size)
{
	int sort = 0;

	if (low < high)
	{
		sort = partition(array, low, high, size);
		quickSort(array, low, sort - 1, size);
		quickSort(array, sort + 1, high, size);
	}
}
/**
 * quick_sort - sort an array using quick sort
 * @array: array
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSort(array, 0, size - 1, size);
}

