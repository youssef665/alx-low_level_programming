#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of a list
 * @head: pointer to pointer to list
 *
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int hdata;

	if (*head == NULL)
		return (0);

	p = *head;
	hdata = (*head)->n;
	*head = (*head)->next;

	free(p);

	return (hdata);
}


