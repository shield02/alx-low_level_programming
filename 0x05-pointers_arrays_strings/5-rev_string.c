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
	char temp;

	while (s[i + 1] != '\0')
		i++;

	for (j = i; i < j / 2 + 1; --j)
	{
		temp = s[i];
		s[j] = s[i - j];
		s[i - j] = temp;
	}
}
