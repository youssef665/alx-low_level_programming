#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a list
 * @head: pointer to the list
 * @index: index of the node
 *
 * Return: NULL if node doesn't exist
 * or the node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
