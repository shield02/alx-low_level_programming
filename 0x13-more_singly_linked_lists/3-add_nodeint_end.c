#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node
 * @head: struct type arg
 * @n: int type arg
 *
 * Description: This function adds a new node to the end of a list
 * Return: int
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
	{
		return (NULL);
	}

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	y = *head;

	while (y->next != NULL)
	{
		y = y->next;
	}
	y->next = x;

	return (x);
}

