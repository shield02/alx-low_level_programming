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
	
	while (s[i])
		i++;

	for (i = 0; s[i] != '\0'; --i)
	{
		_putchar(s[i]);
	}
	
	_putchar('\n');
}
