#include "main.h"

/**
 * print_line - draws a stright line
 * @n: int variable, number of times _ should print
 * Return: 0
 */

void print_line(int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
