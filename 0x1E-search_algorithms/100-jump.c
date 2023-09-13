#include "search_algos.h"

/**
 * jump_search - search for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of the elements in the array
 * @value: value to search for
 *
 * Description: function seaches for a vlaue in a sorted array of integers
 * using the jumpserch algorithm
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (array == NULL || size == 0)
		return (-1);

	j = sqrt(size);

	for (i = k = 0; k < size && array[k] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", k, array[k]);
		i = k;
		k += j;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, k);

	if (k < size - 1)
		k = k;
	else
		k = size - 1;

	for (; i < k && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}
