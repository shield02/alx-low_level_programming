#include "main.h"

/**
 * _islower - entry point
 * @c: any string letter
 * Return: 0 or 1
 */
int _islower(int c)
{
	int lower = (c >= 97);
	int notlower = (c <= 122);

	return (lower && notlower);
}
