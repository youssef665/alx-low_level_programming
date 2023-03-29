#include <stdio.h>

/**
 * print_rev - a function that prints reversed string
 * @s: pointer to character
 */


void print_rev(char *s)
{
	int i, c = 0;


	while (*(s + c) != '\0')
	{
		c++;
	}
	 i = c - 1;

	while (i != -1)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
