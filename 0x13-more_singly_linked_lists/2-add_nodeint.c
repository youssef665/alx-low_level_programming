#include "lists.h"

/**
 * add_nodeint - a function that add node
 * to the beginging of the list
 * @head: pointer to pointer to list
 * @n: integer value
 *
 * Return: the address of the element
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;

	*head = p;

	return (p);
}

