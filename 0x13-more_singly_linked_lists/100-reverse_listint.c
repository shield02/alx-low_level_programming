#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse a linked list
 * @head: struct type arg
 *
 * Description: This function reverses a linked list
 * Return: a pointer to the first node of the revered list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;

	return (*head);
}

