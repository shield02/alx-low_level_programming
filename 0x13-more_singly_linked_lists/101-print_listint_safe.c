#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: struct type arg
 *
 * Description: This function prints a linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	long int d;
	size_t i;

	for (i = 0; head != NULL; i++)
	{
		d = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}

