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
	int index, sqr, prev;
	int i = 0;

	if (array == NULL || size == 0)
		return (-1);

	sqr = sqrt(size);
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		i++;
		prev = index;
		index = i * sqr;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
