#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: char var, the string
 *
 * Description: this function returns the length of a string
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		continue;

	return (i);
}
