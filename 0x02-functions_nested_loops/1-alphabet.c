#include <stdio.h>
#include "main.h"
/**
 * Description : a function 
 * print_alphabet , a funtion that print the alphabet in lowercase
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
		putchar('\n');
}
