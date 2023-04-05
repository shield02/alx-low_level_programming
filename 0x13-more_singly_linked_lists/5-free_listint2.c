#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a singly linked list
 * @head: struct type arg
 *
 * Description: This function frees a singly linked list and set head to NULL
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
}

