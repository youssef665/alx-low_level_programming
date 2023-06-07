#include "main.h"

/**
 * _print_rev_recursion - a function that prints a reversed string
 * @s: a pointer to character
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
	putchar('\n');
}
