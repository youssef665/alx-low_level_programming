#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: Operand
 */

void print_to_98(int n)
{
	int i = n;

	if (i >= 98)
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);

			if ( i == 98)

				continue;

				printf(", ");
		}
	}
	else
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d, ",i);
			if (i == 98)
				
				continue;

				printf(", ");
		}
	}
}


