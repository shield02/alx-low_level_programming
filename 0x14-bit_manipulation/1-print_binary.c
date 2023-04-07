#include "main.h"
#include <stdlib.h>

/**
 * print_binary - print binary
 * @n: unsigned long int
 *
 * Description: This function prints binary representation of a number
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = n;
	int num = 0;

	do {
		i = i >> 1;
		num++;
	} while (i);

	if (!num)
		_putchar('0');

	do {
		i = n >> --num;
		if (i & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	} while (num);
}

