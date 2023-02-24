#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

/**
 * print_number - prints an integer
 * @n: int var, number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_numbers(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
