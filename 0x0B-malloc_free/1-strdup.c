#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - pointer to a newly allocated space in memory
 * @str: char variable
 *
 * Description: This function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as parameter
 * Return: char
 */

char *_strdup(char *str)
{
	char *ch;
	unsigned int size, i;

	size = 0;
	i = 0;

	if (str == 0)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	size++;
	ch = malloc(sizeof(char) * size);

	if (ch == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = str[i];
	}

	ch[i] = '\0';

	return (ch);
}

