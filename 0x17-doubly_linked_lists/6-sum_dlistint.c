#include "lists.h"

/**
 * sum_dlistint - sums  the data the  list.
 * @head:  head of the  list.
 *
 * Return:  sum 
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;


	while (head)
	{
		s += head->n;
		head = head->next;
	}


	return (s);
}
