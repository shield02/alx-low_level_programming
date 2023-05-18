#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a lists
 * @head: pointer var
 * @n: const in var
 *
 * Description: This function adds a new node at the end of
 * a doubly linked list
 * Return: address of new list or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mem = NULL, *t = NULL;

	mem = malloc(sizeof(dlistint_t));
	if (mem == NULL)
	{
		return (NULL);
	}

	mem->n = n;
	mem->next = NULL;
	mem->prev = NULL;
	if (*head == NULL)
	{
		*head = mem;
		return (mem);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}

	mem->prev = t;
	t->next = mem;
	return (mem);
}

