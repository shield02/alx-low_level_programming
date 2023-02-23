#include "main.h"

/**
 * print_square - prints a square
 * @size: int variable, size of the square, 0 or less
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
