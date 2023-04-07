#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - set the vlaue of bit to 0
 * @n: unsigned long int
 * @index: unsigned int, starts from 0
 *
 * Description: This function sets the value of a bit to 0 at a given index
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}

