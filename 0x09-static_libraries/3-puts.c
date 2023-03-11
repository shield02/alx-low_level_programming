#include  "main.h"

/**
 * _puts - prints a string to stdout
 * @str: a char var to be printed to stdout
 *
 * Description: this function prints a string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

