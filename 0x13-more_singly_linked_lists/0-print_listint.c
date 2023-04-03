#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: singly linked list
 *
 * Description: This function prints all the elements of listint
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t	pointer = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		pointer++;
		h = h->next;
	}
	return (pointer);
}
	
