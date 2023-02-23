#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: int variable, size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;

		while (ii < size - 1)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		ii++;
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}
