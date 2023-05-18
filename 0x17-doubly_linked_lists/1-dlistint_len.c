#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a doubly list
 * @h: const var
 *
 * Description: This function returns the number of elements
 * in a doubly linked list
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	int k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}

