#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer var
 * @idx: unsigned int var - index of the list
 * @n: int var
 *
 * Description: This function inserts a new node at a given index
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mem = NULL, *temp = NULL;
	unsigned int k = 0, l = 0;

	if (!h || (idx > 0 && *h == NULL))
		return (NULL);
	temp = *h;
	for (l = 0; temp; l++, temp = temp->next)
		;
	if (idx > l)
		return (NULL);
	mem = malloc(sizeof(dlistint_t));
	if (mem == NULL)
		return (NULL);
	temp = *h;
	mem->n = n;
	mem->next = NULL;
	mem->prev = NULL;
	if (idx == l)
		return (add_dnodeint_end(h, n));
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	while (temp->next)
	{
		if (k == idx - 1)
		{
			mem->prev = temp;
			mem->next = temp->next;
			temp->next->prev = mem;
			temp->next = mem;
		}
		k++;
		temp = temp->next;
	}
	return (mem);
}

