#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the 9 times table
 */

void times_table(void)
{
	int i , j , k;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{

			k = i*j;
			putchar(k + '0');
			puthcar(',');

		}
		
	
		putchar('\n');
	
	}
