#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at an index
 * @head: struct type arg
 * @index: int arg, index of the node to be deleted
 *
 * Description: This function deleted a node at a given index
 * Return: i on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	i = 0;
	while (i < index - 1)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
		i++;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}

