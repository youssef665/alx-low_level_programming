#include <stdio.h>
#include "main.h"

/**
 * print_alphabet , a funtion that print the alphabet, in lowercase
 *
 * Return: Always 0
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
