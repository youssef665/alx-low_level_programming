#include "lists.h"

/**
 * sum_listint - a function that sums all the data
 * @head: pointer to the list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}


