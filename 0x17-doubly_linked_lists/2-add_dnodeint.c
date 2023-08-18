#include "lists.h"


/**
 * add_dnodeint - Adds a new node at the beginning of the  list.
 * @head: pointer to the head of the linked list.
 * @n: integer number
 *
 * Return:  NULL or  the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;

	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
