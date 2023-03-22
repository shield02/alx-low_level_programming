#include <stdio.h>

/**
 * array_iterator - excutes a given function
 * @array: int variable
 * @size: array's size
 * @action: pointer
 *
 * Description: This function excutes a function given as a parameter
 * on each element of an array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

