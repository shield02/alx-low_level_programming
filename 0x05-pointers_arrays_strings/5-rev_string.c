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

	j = i;
	i = 0;
	while (i < j / 2 + 1)
	{
		temp = s[i];
		s[i] = s[j - i];
		s[j - i] = temp;
		i++;
	}
}
