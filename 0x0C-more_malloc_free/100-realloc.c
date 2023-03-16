#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: void variable
 * @old_size: unsigned int variable
 * @new_size: unsigned int variable
 *
 * Description: This function reallocates a memory block using malloc and free
 * Return: void
 */
void *_realloc(void *ptr, unisigned int old_size, unsigned int new_size)
{
	char *ch;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ch = malloc(new_size);
		if (ch == NULL)
			return (NULL);
		return (ch);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ch = malloc(new_size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		ch[i] = ((char *)ptr)[i];
		free(ptr);
	}
	return (ch);
}
