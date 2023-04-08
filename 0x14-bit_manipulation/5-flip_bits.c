#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - finds the number of bit needed
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Description: This function finds the number of bits you would need
 * to flip to get from one number to another
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	do {
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	} while (n);

	return (i);
}

