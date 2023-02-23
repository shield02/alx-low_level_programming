#include "main.h"

/**
 * _isupper(int c) - checks for uppercase characters
 * @c: int variable to be checked
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
