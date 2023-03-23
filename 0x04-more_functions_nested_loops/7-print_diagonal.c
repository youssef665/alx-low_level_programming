#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that draw a diagonal
 *@n: argument
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			

			for (j = 1; j <= i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}

