#include "lists.h"


/**
 * add_dnodeint_end - Adds a new node at the end of the  list.
 * @head: A pointer to the head of the list
 * @n: integer number
 *
 * Return:  NULL or  the address of the new node.
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn, *end;

	newn = malloc(sizeof(dlistint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		newn->prev = NULL;
		*head = newn;
		return (newn);
	}

	end = *head;

	while (end->next != NULL)
		end = end->next;
	end->next = newn;
	newn->prev = end;

	return (newn);
}
