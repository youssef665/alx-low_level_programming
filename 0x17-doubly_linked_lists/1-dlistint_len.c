#include "lists.h"


/**
 * dlistint_len -  returns the number of elements in a linked list.
 * @h: The head of the list
 *
 * Return: The number of elements in the  list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}

	return (no);
}
