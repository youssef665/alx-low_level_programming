#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list
*
* @h:pointer 
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *c = h;
	size_t counter = 0;

	while (c != NULL)
		{	
	if (c->str != NULL)
		printf("[%d] %s\n", c->len, c->str);
	else
	{
		printf("[0] (nil)\n");
	}
		counter += 1;
		c = c->next;
		}

		return (counter);
}
