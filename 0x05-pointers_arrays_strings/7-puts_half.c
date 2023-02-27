#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char variable
 *
 * Description: this function prints half of the length
 * a string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j, k;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	else if
	{
		for (k = (i - 1) / 2; k < i - 1; k++)
			_putchar(str[k + 1]);
	}
	_putchar('\n');
}
