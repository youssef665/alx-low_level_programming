#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints
 * all elements of list
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t non = 0;

	while (h)
	{
		non++;

		printf("%d\n", h->n);
		h = h->next;
	}

	return (non);
}
