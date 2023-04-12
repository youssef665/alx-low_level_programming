#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates arr of chars and intilize it with char
 * @size: a postive integer value
 * @c: a character argument
 *
 * Return: pointer to an array and NULL if only size equal zero
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;


	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *)malloc(size * sizeof(char));

	for (i = 1; i < size; i++)
	{
		*(ptr + i) = c;
	}
	}
	return (ptr);
}
