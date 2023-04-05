#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a singly linked list
 * @head: struch type arg
 *
 * Description: This function deletes the first node of singly linked list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int temp;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	*head = tmp->next;
	temp = tmp->n;
	free(tmp);

	return (temp);
}

