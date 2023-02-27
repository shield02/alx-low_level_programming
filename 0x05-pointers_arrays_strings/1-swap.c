#include "main.h"

/**
 * swap_int - swap two int values
 * @a: int var1
 * @b: int var2
 *
 * Description: this function takes two int variables
 * as argument and swaps the values of the variables
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
