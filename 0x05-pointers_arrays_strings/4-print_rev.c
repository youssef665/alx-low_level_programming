#include <stdio.h>

/**
 * print_rev - a function that prints reversed string
 * @s: pointer to character
 */


void print_rev(char *s)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	while ( i != -1)
	{
		putchar(*(str + i));
		i--;
	}

