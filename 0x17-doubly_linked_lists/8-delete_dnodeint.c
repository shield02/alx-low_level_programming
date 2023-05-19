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

/**
 * delete_dnodeint_at_index - deletes a node at the index
 * @head: pointer var
 * @index: unsigned int var
 *
 * Description: This function deletes a node at a given index of a doubly
 * linked list
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = NULL, *dl = NULL;
	unsigned int k = 0, l = 0;

	if (!head || !*head)
		return (-1);
	t = *head;
	for (l = 0; t; l++, t = t->next)
		;
	if (index > l)
		return (-1);
	t = *head;
	if ((*head)->next == NULL && index == 0)
	{
		*head = NULL;
		free(t);
		return (1);
	}
	if (index == 0 && delete_firstnode(head) == 1)
		return (1);
	do {
		if (k == index - 1 && index + 1 == l)
		{
			dl = t->next;
			t->next = NULL;
			free(dl);
			return (1);
		}
		if (k == index - 1)
		{
			dl = t->next;
			t->next->next->prev = t;
			t->next = t->next->next;
			free(dl);
			return (1);
		}
		k++;
		t = t->next;
	} while (t->next);
	return (-1);
}

