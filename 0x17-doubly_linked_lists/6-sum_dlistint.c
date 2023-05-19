#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint
 * @head: pointer var
 *
 * Description: This function sums all the data of a doubly linked
 * list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sm = 0;

	while (head)
	{
		sm += head->n;
		head = head->next;
	}
	return (sm);
}

