#include "lists.h"

/**
 * list_len - returns the numbeir of elements in a linked list
 * @h: pointer 
 *
 * Return:  number of elements
*/

size_t list_len(const list_t *h)
	{
		size_t noe = 0;

		while (h)
		{
			noe++;
			h = h->next;
		}

		return (noe);
	}
