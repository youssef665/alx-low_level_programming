#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node  at a given position.
 * @h: A pointer to the head of the list
 * @idx: index to insert node
 * @n: integer number
 *
 * Return:  NULL or the address of the  node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *newn;

	if (idx == 0)
		return (add_dnodeint(h, n));


	for (; idx != 1; idx--)
	{
		t = t->next;

		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	newn = malloc(sizeof(dlistint_t));

	if (newn == NULL)
		return (NULL);

	newn->n = n;

	newn->prev = t;
	newn->next = t->next;
	t->next->prev = newn;
	t->next = new;


	return (newn);
}
