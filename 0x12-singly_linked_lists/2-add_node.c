#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head
 * @str: string
 *
 * Return: on succes  address to the new element, or  NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *nn;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);

	d = strdup(str);
	if (d == NULL)
	{
		free(nn);
		return (NULL);
	}
	for (l = 0; str[l];)
		l++;

	nn->str = d;
	nn->len = l;
	nn->next = *head;

	*head = nn;

	return (nn);

}
