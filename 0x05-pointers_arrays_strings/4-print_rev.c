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
	int i;

	for (i = len(s); s[i] != '\0'; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
