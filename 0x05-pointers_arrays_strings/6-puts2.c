#include "main.h"

/**
 * puts2 - prints alternate character of a string
 * @str: char var to be printed
 *
 * Description: this function prints every alternate
 * character of a string starting with the first character
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
