#include <stdio.h>

/**
 * _print_rev_recursion - a function prints a string in reverse with recursion
 * @s: a pointer to a character argument
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
