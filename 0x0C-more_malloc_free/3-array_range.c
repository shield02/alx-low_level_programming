#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int variable
 * @max: int variable
 *
 * Description: This function creates an array of integers
 * Return: int
 */
int *array_range(int min, int max)
{
	int *ch;
	int i = 0;
	int j = (max - min) + 1;

	if (min > max)
		return (NULL);
	ch = malloc(((max - min) + 1) * sizeof(int));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		ch[i] = min;
		min++;
	}
	return (ch);
}
