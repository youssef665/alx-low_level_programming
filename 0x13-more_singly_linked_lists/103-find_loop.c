#include "lists.h"

/**
 * find_listint_loop - a function that finds loop
 * in list
 * @head: pointer to the list
 *
 * Return: pointer to the node or null
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	if (head == NULL || head->next == NULL)
		return (NULL);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}

			return (t);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (NULL);
}


