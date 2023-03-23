#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: int variable
 * @size: int variable
 * @cmp: function pointer
 *
 * Description: This function searches for an integer
 * Return: the indes of the first element but not 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
			{
				return (i);
			}
		}
	}
	return (-1);
}

