#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array fo integers
  * @min: first integer argument
  * @max: second integer argument
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}

	return (p);
}
