#include "lists.h"

/**
 * add_nodeint_end - a function that adds new node
 * to the end
 * @head: pointer to pointer to list
 * @n: number to be added
 *
 * Return: address of the new element or
 * NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *ln;

	p = malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
	}

	else
	{
		ln = *head;
		while (ln->next != NULL)
			ln = ln->next;
		ln->next = p;
	}

	return (ln);
}
