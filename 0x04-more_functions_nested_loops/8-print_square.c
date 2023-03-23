#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: Operand
 */

void print_square(int size)
{
	int i, j;

	if (i <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (i = 1 ; j <= size; j++)
			{
				putchar('#');
			}
			putcar('\n');
		}
	}
}

