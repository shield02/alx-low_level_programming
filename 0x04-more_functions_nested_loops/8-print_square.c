#include "main.h"

/**
 * print_square - prints a square
 * @size: int variable, size of the square, 0 or less
 * Return: 0
 */

void print_square(int size)
{
	int i = 0, ii;

	while (i < size && size > 0)
	{
		ii = 0;
		while (ii < size)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
