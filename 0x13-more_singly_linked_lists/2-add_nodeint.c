#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node
 * @head: struct type arg
 * @n: int arg
 *
 * Description: This function add a new node at the beginning of a string list
 * Return: int
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}

	p->n = n;
	p->next = *head;
	*head = p;

	return (*head);
}

