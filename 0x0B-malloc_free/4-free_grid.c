#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that free a 2 dimensional grid
 *@grid: first integer argument
 *@height: second integer argument
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *l;

	for (i = 0; i < height; i++)
	{
		l = grid[i];
		free(l);
	}
	free(grid);
}
