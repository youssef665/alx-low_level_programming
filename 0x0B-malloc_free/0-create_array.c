#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - a function that creates an array of chars
 * and intializes it with a specific char
 * @size : a postive integer argument
 * @c:  a chracter argument
 *
 * Return: NULL if size = 0 or if it fails ,or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{

	char *p;
	int i;

	if (size == 0)
		return (NULL);

	else
	{
		p = (char *) malloc(size * sizeof(c));

		if (p != NULL)
		{
			 for (i = 0; i < size; i++)
				*(p + i) = c;
		}
	}

		return (p);

}


