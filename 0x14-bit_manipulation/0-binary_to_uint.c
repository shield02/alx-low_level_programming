#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - converts a binary number
 * @b: char variable
 *
 * Description: This function takes a binary as a string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = 2 * num + (b[i] - '0');
		++i;
	}
	return (num);
}

