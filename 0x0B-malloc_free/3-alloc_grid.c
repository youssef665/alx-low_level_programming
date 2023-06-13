#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer 
 * to a 2 dimensinal array
 *@width: first integer argument
 *@height: second integer argument
 * Return: a pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **m, i, j, l, *p;


	if (width <= 0 || height <= 0)
		return (NULL);
	m = (int **)malloc(height * sizeof(int *));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(m + i) = (int *)malloc(width * sizeof(int));
		if (*(m + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = m[i];
				free(p);
			}
			free(m);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			m[l][j] = 0;
		}
	}
	return (m);
}
