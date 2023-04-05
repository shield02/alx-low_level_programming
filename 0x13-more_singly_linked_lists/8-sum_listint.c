#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all the data
 * @head: struct type arg
 *
 * Description: This function sums all the data in a singly linked list
 * Return: 0
*/

int sum_listint(listint_t *head)
{
	int sm;

	for (sm = 0; head != NULL; sm = sm)
	{
		sm += head->n;
		head = head->next;
	}

	return (sm);
}

