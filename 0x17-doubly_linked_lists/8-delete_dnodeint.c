#include "lists.h"


/**
 * delete_dnodeint_at_index - Deletes a node at a given index.
 * @head: A pointer to the head of list
 * @index: The index to delete
 *
 * Return: 1 or  -1.
 */



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *t = *head;


	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (t == NULL)
			return (-1);
		t = t->next;
	}

	if (t == *head)
	{
		*head = t->next;

		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		t->prev->next = t->next;

		if (t->next != NULL)
			t->next->prev = t->prev;
	}

	free(t);

	return (1);
}
