#include "main.h"
#include <stdlib.h>

/**
 * get_bit - get the value of a bit
 * @n: unsigned long int
 * @index: unsisned int, starts from 0
 *
 * Description: This function gets the value of a bit at a given index
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

