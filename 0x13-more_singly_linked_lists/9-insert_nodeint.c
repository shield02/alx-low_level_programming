#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node
 * @head: struct type arg
 * @idx: int index where the new node is added
 * @n: int arg
 *
 * Description: This function inserts a new node at a given position
 * Return: new address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		tmp = *head;
		while (i < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}

