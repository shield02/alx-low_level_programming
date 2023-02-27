#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char variable that will be printed in reverse
 *
 * Description: this function prints a string given to
 * it in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = i; j > 0 ; --j)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
