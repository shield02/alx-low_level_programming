#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint linked list
 * @head: pointer var
 * @index: unsigned int - index of the node
 *
 * Description: This function returns the nth node of the dlistint
 * linked list
 * Returns: index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int idx = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (temp)
	{
		if (idx == index)
			return (temp);
		idx++;
		temp = temp->next;
	}
	return (NULL);
}

