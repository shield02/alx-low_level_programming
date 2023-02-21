#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: int variable
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int lowercase = (c >= 97 && c <= 122);
	int uppercase = (c >= 65 && c <= 90);

	return (lowercase || uppercase);
}
