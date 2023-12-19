#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t k, indx, tmp = 0;

	if (size < 2)
		return;
	for (k = 0; k < size; k++)
		for (indx = 0; indx < size; indx++)
		{
			if (array[indx] > array[indx + 1] && array[indx + 1])
			{
			tmp = array[indx];
			array[indx] = array[indx + 1];
			array[indx + 1] = tmp;
			print_array(array, size);
			}
		}
}
