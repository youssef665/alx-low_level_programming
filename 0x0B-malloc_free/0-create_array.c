#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a funct that creates arr of chars and intilize it with char
 * @size: a postive integer value
 * @c: a character argument
 *
 * Return: pointer to an array and NULL if only size equal zero
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}