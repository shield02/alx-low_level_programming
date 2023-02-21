#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int variable
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		_putchar("%i, ", n);
		n--;
	}

	_putchar("98");
	_putchar('\n');
}
