#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: unsigned int variable
 * @size: unsigned int variable
 *
 * Description: this function allocates memory for an array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ch;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ch[i] = 0;
		i++;
	}
	return (ch);
}
