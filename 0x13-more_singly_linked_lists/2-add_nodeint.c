#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	p->n = n;
	p->next = *head;
	*head = p;

	return (*head);
}

