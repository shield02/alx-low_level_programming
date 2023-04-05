#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - finds the nth node
 * @head: struct type arg
 * @index: unsigned int arg
 *
 * Description: This function finds the nth node of a singly linked list
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		i++;
	}
	return (head);
}

