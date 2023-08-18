#include "lists.h"


/**
 * print_dlistint - Prints all the element .
 * @h: The head of the list
 *
 * Return: The number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (no);
}
