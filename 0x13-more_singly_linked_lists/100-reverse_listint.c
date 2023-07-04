#include "lists.h"

/**
 * reverse_listint - a function that reverse a list
 * @head: pointer to pointer to list
 *
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	if (head == NULL || *head == NULL)
		return (NULL);

	b = NULL;

	while ((*head)->next != NULL)
	{
		a = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = a;
	}

	(*head)->next = b;

	return (*head);
}
