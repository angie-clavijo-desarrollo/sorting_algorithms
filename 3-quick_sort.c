#include "sort.h"

/**
 * partition - create partition of quick sort
 * @array: the array
 * @start: low digit of array
 * @end: max num in the array
 * @size: size of the array
 * Return: the position of pivote
 */

int partition(int *array, int start, int end, size_t size)
{
	int i = 0, j, pivote = 0, tmp = 0;

	i = start - 1;
	pivote = array[end];
	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivote)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (i != j)
			{
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[end])
	{
		tmp = array[i + 1];
		array[i + 1] = array[end];
		array[end] = tmp;
		if (i + 1 != j)
		{
			print_array(array, size);
		}
	}
	return (i + 1);
}

/**
 * execute - execute the program, create a recursive function
 * to create the tree of process
 * @array: the array
 * @start: the min number of array
 * @end: the max number of arrat
 * @size: the size of array
 */


void execute_quick_sort(int *array, int start, int end, size_t size)
{
	int pivot = 0;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		execute_quick_sort(array, start, pivot - 1, size);
		execute_quick_sort(array, pivot + 1, end, size);
	}
}


/**
 * quick_sort - create the algorithm of quick sort
 * @array: the array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int start = 0, end = 0;

	if (array == NULL)
	{
		return;
	}
	if (size < 2)
	{
		return;
	}
	end = size - 1;
	execute_quick_sort(array, start, end, size);

}
