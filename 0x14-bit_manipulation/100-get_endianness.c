#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - checks the endianness
 *
 * Description: This function checks the endianness of the computer
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

