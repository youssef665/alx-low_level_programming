#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that get the number
 * of elements in linked list
 * @h: pointer to list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t noe = 0;

	while (h)
	{
		noe++;
		h = h->next;
	}

	return (noe);
}
