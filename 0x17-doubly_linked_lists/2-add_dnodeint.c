#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: pointer var
 * @n: const int var
 *
 * Description: This function adds a new node the beginning of a
 * doubly linked list
 * Return: address of new list or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *mem = NULL;

	mem = malloc(sizeof(dlistint_t));
	if (mem == NULL)
		return (NULL);

	mem->n = n;
	mem->next = NULL;
	mem->prev = NULL;
	if (*head == NULL)
	{
		*head = mem;
		return (mem);
	}
	(*head)->prev = mem;
	mem->next = *head;
	*head = mem;

	return (mem);
}

