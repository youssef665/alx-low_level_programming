#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head
 *@str: string
 *
 *Return: NULL on  failure or address or the element on success
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	d = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = d;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
