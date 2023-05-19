#include "lists.h"

/**
 * free_dlistint - free the dlistint
 * @head: pointer var
 *
 * Description: This function frees the dlistint list
 * Returns: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}

