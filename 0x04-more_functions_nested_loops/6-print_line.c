#include <stdio.h>
#include "main.h"

/**
 *  print_line - function that draws a straight line
 *  @n: an intger argument
 */

void print_line(int n)
{
	int i;

	if (i == 0)
	{
		putchar('\n');
	}
	else
	{

		for (i = 1; i < n; i++)
		{
			putchar('_');

		}
		putchar('\n');
	}
}

