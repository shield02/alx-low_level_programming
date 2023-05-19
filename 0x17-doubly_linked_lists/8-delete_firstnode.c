#include "lists.h"

/**
 * delete_firstnode - deletes the first node of a doubly list
 * @h: pointer var
 *
 * Description: This function deletes the first node of doubly linked list
 * Return: 1 or -1
**/
int delete_firstnode(dlistint_t **h)
{
	dlistint_t *t = NULL;

	if (!h)
		return (1);
	t = *h;
	t->next->prev = NULL;
	*h = t->next;
	free(t);
	return (1);
}

