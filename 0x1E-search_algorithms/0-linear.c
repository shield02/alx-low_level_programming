#include "search_algos.h"

/**
 * linear_search - search for a value in an array of int
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: Searches for value in an array of integers
 * using linear search algorithmn
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);

