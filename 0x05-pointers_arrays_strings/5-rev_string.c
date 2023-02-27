#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char variable
 *
 * Description: this function reverses a string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	char temp;

	for (j = i; i < j / 2 + 1; --j)
	{
		temp = s[j];
		s[j] = s[i - j];
		s[j - i] = temp;
	}
}
