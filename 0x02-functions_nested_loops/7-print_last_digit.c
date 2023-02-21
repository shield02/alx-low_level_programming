#include "main.h"

/**
 * print_last_digit - print that last digit of a number
 * @n: int variable
 * Return: int result
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
	{
		result = result * -1;
	}

	_putchar(result + '0');

	return (result);
}
