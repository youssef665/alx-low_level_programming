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
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if ( i == 98)
			{

				continue;
			}
				
			printf(", ");

	
		}
		putchar('\n');
	}
	else
	{
		for (i = n; i <= 98;i++)
		{
			printf("%d, ",i);
			if (i == 98)
			{
				
				continue;
			}
			printf(", ");
		}
		putchar('\n');
	}
	
}


