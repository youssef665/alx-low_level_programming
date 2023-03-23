#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints numbers from 0 to 14 10 times.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			putchar(i + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}
