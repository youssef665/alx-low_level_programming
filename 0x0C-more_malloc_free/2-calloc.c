#include "main.h"
#include <stdlib.h>

/**
  * _calloc - alloacates memory using malloc
  * @nmemb: first postive integer argument
  * @size: potive integer for size
  *
  * Return: pointer or null
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			b[i] = 0;
		return (b);
	}
	else
		return (NULL);
}
