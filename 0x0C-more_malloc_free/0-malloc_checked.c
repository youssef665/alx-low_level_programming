#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: a postive int argument
 *
 * Return: pointer to the address
 */

void *malloc_checked(unsigned int b)
{

	void *c = malloc(b);

	if (c == NULL)

	exit(98);

	return (c);
}
