#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times ,lowercase
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char j = 'a';

		while (j <= 'z')
		{

			putchar(j);
			j++;
		}

		i++;
		putchar('\n');
	}


}
