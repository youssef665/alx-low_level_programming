#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deltes 
 * node at index 
 * @head: pointer to pointer to node
 * @index: index of the node
 *
 * Return: 1 if succeeded , -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *c = *head;
	unsigned int node;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}

	t = c->next;
	c->next = t->next;
	free(t);
	return (1);
}
