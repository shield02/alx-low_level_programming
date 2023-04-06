#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: struct type arg
 *
 * Description: This function finds the loop in a linked list
 * Return: the address of the node or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint *x, *y;

	*x = head;
	*y = head;

	if (!head)
	{
		return (NULL);
	}

	for (; s && y && x->next; x = x)
	{
		x = x->next;
		x = x->next;
		y = x->next;
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (y);
		}
	}
	return (NULL);
}

