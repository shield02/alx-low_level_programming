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

	while (s[i] != '\n')
		i++;

	for (i = i; s[i] != '\n'; --i)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
