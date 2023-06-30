#include "lists.h"
#include <stdlib.>
/**
 * free_list - free a list
 * @head:  pointer to the head of the list
 *
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
