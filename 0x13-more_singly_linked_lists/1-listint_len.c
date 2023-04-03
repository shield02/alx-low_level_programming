#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: const variable of lisntint type
 *
 * Description: This function counts the number of elements in a linked list
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *n;
	size_t pointer = 0;

	n = h;
	while(n != NULL)
	{
		++pointer;
		n = n->next;
	}
	return (pointer);
}

