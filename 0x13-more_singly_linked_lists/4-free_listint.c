#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: struct type
 *
 * Description: This function frees a list
 * Return: int
 */

void free_listint(listint_t *head)
{
	listint_t *x, *y;

	x = head;
	while (x != NULL)
	{
		y = x->next;
		free(x);
		x = y;
	}
}

