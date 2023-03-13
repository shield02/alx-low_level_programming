#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: unsigned int variable
 * @c: char variable
 *
 * Description: This function creates an array of chars and
 * initializes it with a special char
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	i = 0;
	ch = malloc(sizeof(char) * size);

	if (ch == 0)
		return (NULL);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			ch[i] = c;
		}
		ch[i] = '\0';

		return (ch);
	}
	else
	{
		return (NULL);
	}
}

