#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly list
 * @h: const list pointer
 *
 * Description: This function prints all the elements of
 * a doubly list
 * Return: int - number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

