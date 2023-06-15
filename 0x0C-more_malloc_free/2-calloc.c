#include "main.h"
#include <stdlib.h>

/**
  * _calloc - alloacates memory using malloc
  * @nmemb: first postive integer argument
  * @size: potive integer for size
  *
  * Return: 
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, d = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = nmemb * size;
	c = malloc(d);

	if (c == NULL)
		return (NULL);

	while (i < d)
	{
		p[i] = 0;
		i++;
	}

	return (c);
}
