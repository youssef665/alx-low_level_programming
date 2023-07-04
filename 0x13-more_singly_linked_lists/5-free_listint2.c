#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: pointer to pointer to list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}

	head = NULL;
}
