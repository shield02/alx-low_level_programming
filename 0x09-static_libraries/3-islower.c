#include "main.h"

/**
 * _islower - checks if a string is lower
 * @c: int variable
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

