#include "main.h"

/**
 * print_diagonal - draws a digonal line on the terminal
 * @n: int variable, the number of times \ should print
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
