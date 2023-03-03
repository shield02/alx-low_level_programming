#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int variable - array of integers
 * @n: int variable - number of elements in the array
 *
 * Description: This function reverses the content of an array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
