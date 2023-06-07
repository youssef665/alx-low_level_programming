#include "main.h"

/*
 * _puts_recursion - a function that prints a string
 * @s: a pointer to characters
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

		putchar('*s');
	_puts_recursion(s + 1);
}
