#include "sort.h"
/**
 * shell_sort - algorithm optimization of inserion sort
 * @array: Parameter of array
 * @size: Size of array
 * Return: None
 */

void shell_sort(int *array, size_t size)
{
	for (size_t interval = size / 2; interval > 0; interval /= 2)
	{
		for (size_t i = interval; i < size; i += 1)
		{
			int temp = array[i];
			size_t j;

			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
		array[j] = temp;
		}
	}
	for (size_t i = 0; i < size; ++i)
	{
		printf("%d  ", array[i]);
	}
printf("\n");
}
