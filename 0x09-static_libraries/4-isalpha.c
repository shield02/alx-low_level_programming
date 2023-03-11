#include "main.h"

/**
 * _isalpha - code to check if it is alpha
 * @c: int arguement
 * Return: Always 0
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

